#include "background.h"

namespace tesseract::entities
{
	enum BackgroundLayer { FarLayer, MidLayer, CloseLayer, LayerCount };

	static const float farWidthRatio = 64.0f;     
	static const float farHeightRatio = 1.5f;     
	static const float farSpacingRatio = 16.0f;   
	static const float farSpeed = 30.0f;

	static const float midWidthRatio = 16.0f;     
	static const float midHeightRatio = 2.5f;     
	static const float midSpacingRatio = 10.0f;   
	static const float midSpeed = 75.0f;

	static const float closeWidthRatio = 8.0f;    
	static const float closeHeightRatio = 6.0f;   
	static const float closeSpacingRatio = 6.0f;  
	static const float closeSpeed = 150.0f;

	static const float midOffsetRatio = 32.0f;
	static const float closeOffsetRatio = 16.0f;

	struct Layer
	{
		Vector2 pos;
		Vector2 size;
		float speed;
		float spacing;
		Color color;
	};

	struct Background
	{
		Layer layers[LayerCount];
	};

	static Background background;

	void InitBackground()
	{
		float screenWidth = static_cast<float>(GetScreenWidth());
		float screenHeight = static_cast<float>(GetScreenHeight());

		background.layers[CloseLayer].color = WHITE;
		background.layers[CloseLayer].size = { screenWidth / closeWidthRatio, screenHeight / closeHeightRatio };
		background.layers[CloseLayer].pos = { -screenWidth / closeOffsetRatio, screenHeight - background.layers[CloseLayer].size.y };
		background.layers[CloseLayer].spacing = screenWidth / closeSpacingRatio;
		background.layers[CloseLayer].speed = closeSpeed;

		background.layers[MidLayer].color = WHITE;
		background.layers[MidLayer].size = { screenWidth / midWidthRatio, screenHeight / midHeightRatio };
		background.layers[MidLayer].pos = { -screenWidth / midOffsetRatio, screenHeight - background.layers[MidLayer].size.y };
		background.layers[MidLayer].spacing = screenWidth / midSpacingRatio;
		background.layers[MidLayer].speed = midSpeed;

		background.layers[FarLayer].color = WHITE;
		background.layers[FarLayer].size = { screenWidth / farWidthRatio, screenHeight / farHeightRatio };
		background.layers[FarLayer].pos = { 0.0f, screenHeight - background.layers[FarLayer].size.y };
		background.layers[FarLayer].spacing = screenWidth / farSpacingRatio;
		background.layers[FarLayer].speed = farSpeed;
	}

	void UpdateBackground()
	{
		for (int i = 0; i < LayerCount; i++)
		{
			background.layers[i].pos.x -= background.layers[i].speed * GetFrameTime();
		
			if (background.layers[i].pos.x <= -(background.layers[i].size.x + background.layers[i].spacing))
			{
				background.layers[i].pos.x += background.layers[i].size.x + background.layers[i].spacing;
			}
		}
	}

	void DrawBackground()
	{
		for (int i = 0; i < LayerCount; i++)
		{
			int x = static_cast<int>(background.layers[i].pos.x);

			while (x < GetScreenWidth())
			{
				DrawRectangleLines(static_cast<int>(x), static_cast<int>(background.layers[i].pos.y), static_cast<int>(background.layers[i].size.x), static_cast<int>(background.layers[i].size.y), background.layers[i].color);
			
				x += static_cast<int>(background.layers[i].size.x) + static_cast<int>(background.layers[i].spacing);
			}
			
		}
	}
}
