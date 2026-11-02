#include <raylib.h>
#include "credits.h"
#include "engine/button.h"
#include "scenes/scene_manager.h"

namespace tesseract::scenes
{
	static const float buttonWidthRatio = 5.0f;
	static const float buttonHeightRatio = 12.0f;
	static const float buttonSpacingRatio = 36.0f;
	static const float buttonFontRatio = 24.0f;
	static const Color buttonColor = DARKGRAY;
	static const Color buttonTextColor = WHITE;
	static const char* creditsText = "Game programed by: Ivan Abraham";
	static const char* verText = "v0.2";
	static const int verFontSize = 20;
	static const int verPadding = 10;

	static engine::Button backButton;

	void InitCredits()
	{
		float screenWidth = static_cast<float>(GetScreenWidth());
		float screenHeight = static_cast<float>(GetScreenHeight());

		Vector2 size = { screenWidth / buttonWidthRatio, screenHeight / buttonHeightRatio };
		float spacing = screenHeight / buttonSpacingRatio;
		int fontSize = static_cast<int>(screenHeight / buttonFontRatio);

		Vector2 pos = { screenWidth - size.x - spacing, screenHeight - size.y - spacing };
		engine::InitButton(backButton, pos, size, "BACK", fontSize, buttonColor, buttonTextColor);
	}

	void UpdateCredits()
	{
		if (engine::IsButtonClicked(backButton))
			ChangeScene(Menu);
	}

	void DrawCredits()
	{
		engine::DrawButton(backButton);

		static const int verWidth = MeasureText(verText, verFontSize);
		static const int creditsFontSize = static_cast<int>(GetScreenHeight() / buttonFontRatio);
		static const int creditsWidth = MeasureText(creditsText, creditsFontSize);

		int creditsX = (GetScreenWidth() - creditsWidth) / 2;
		int creditsY = (GetScreenHeight() - creditsFontSize) / 2;

		DrawText(creditsText, creditsX, creditsY, creditsFontSize, WHITE);

		DrawText(verText, GetScreenWidth() - verWidth - verPadding, verPadding, verFontSize, RED);
	}
}
