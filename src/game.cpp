#include "game.h"
#include <raylib.h>
#include "scenes/scene_manager.h"

namespace tesseract
{
	static const char* verText = "v0.1";
	static const int fontSize = 20;
	static const int padding = 10;

	static void InitGame();
	static void UpdateGame();
	static void DrawGame();

	void Run()
	{		
		InitGame();

		while (!WindowShouldClose())
		{
			UpdateGame();

			DrawGame();
		}

		CloseWindow();
	}

	void InitGame()
	{
		static Vector2 screenSize = { 1280, 720 };
		InitWindow(static_cast<int>(screenSize.x), static_cast<int>(screenSize.y), "TESSERACT");
		SetTargetFPS(60);

		scenes::ChangeScene(scenes::Game);

		scenes::InitScene();
	}

	void UpdateGame()
	{
		scenes::UpdateScene();
	}

	void DrawGame()
	{
		BeginDrawing();
		
		ClearBackground(WHITE);
		
		scenes::DrawScene();

		static const int verWidth = MeasureText(verText, fontSize);

		DrawText(verText, GetScreenWidth() - verWidth - padding, padding, fontSize, RED);

		EndDrawing();
	}
}
