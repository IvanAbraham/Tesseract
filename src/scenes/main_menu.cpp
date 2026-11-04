#include <raylib.h>
#include "main_menu.h"
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

	static const char* verText = "v0.3";
	static const int verFontSize = 20;
	static const int verPadding = 10;

	static engine::Button playButton;
	static engine::Button creditsButton;
	static engine::Button exitButton;

	void InitMainMenu()
	{
		float screenWidth = static_cast<float>(GetScreenWidth());
		float screenHeight = static_cast<float>(GetScreenHeight());

		Vector2 size = { screenWidth / buttonWidthRatio, screenHeight / buttonHeightRatio };
		float spacing = screenHeight / buttonSpacingRatio;
		int fontSize = static_cast<int>(screenHeight / buttonFontRatio);

		Vector2 pos = { (screenWidth - size.x) / 2, screenHeight / 2 };
		engine::InitButton(playButton, pos, size, "PLAY", fontSize, buttonColor, buttonTextColor);

		pos.y += size.y + spacing;
		engine::InitButton(creditsButton, pos, size, "CREDITS", fontSize, buttonColor, buttonTextColor);

		pos.y += size.y + spacing;
		engine::InitButton(exitButton, pos, size, "EXIT", fontSize, buttonColor, buttonTextColor);
	}

	void UpdateMainMenu()
	{
		if (engine::IsButtonClicked(playButton))
			ChangeScene(Game);
		else if (engine::IsButtonClicked(creditsButton))
			ChangeScene(Credits);
		else if (engine::IsButtonClicked(exitButton))
			ChangeScene(Exit);
	}

	void DrawMainMenu()
	{
		engine::DrawButton(playButton);
		engine::DrawButton(creditsButton);
		engine::DrawButton(exitButton);

		static const int verWidth = MeasureText(verText, verFontSize);

		DrawText(verText, GetScreenWidth() - verWidth - verPadding, verPadding, verFontSize, RED);
	}
}
