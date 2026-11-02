#include "game.h"
#include <raylib.h>
#include "scenes/scene_manager.h"

namespace tesseract
{
	static void InitGame();
	static void UpdateGame();
	static void DrawGame();

	void Run()
	{		
		InitGame();

		while (!WindowShouldClose() && !scenes::ShouldExit())
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

		scenes::ChangeScene(scenes::Menu);
	}

	void UpdateGame()
	{
		scenes::UpdateScene();
	}

	void DrawGame()
	{
		BeginDrawing();
		
		ClearBackground(BLACK);

		scenes::DrawScene();

		EndDrawing();
	}
}
