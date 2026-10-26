#include "game.h"
#include <raylib.h>
#include "scenes/gameplay.h"

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

		scene::InitGameplay();
	}

	void UpdateGame()
	{
		scene::UpdateGameplay();
	}

	void DrawGame()
	{
		BeginDrawing();
		
		int verWidth = MeasureText(verText, fontSize);

		ClearBackground(WHITE);
		
		scene::DrawGameplay();

		DrawText(verText, GetScreenWidth() - verWidth - padding, padding, fontSize, RED);

		EndDrawing();
	}
}
