#include "gameplay.h"
#include "entities/ship.h"
#include "entities/obstacle.h"
#include "engine/physics.h"

namespace tesseract::scenes
{
	static entities::Ship P1;
	static entities::Obstacle Obs;
	static bool isGameOver;

	static const int fontSize = 30;
	static const char* loseMessage = "GAME OVER - Press enter to retry.";

	void InitGameplay()
	{
		isGameOver = false;

		entities::InitShip(P1);
		entities::InitObstacle(Obs);
	}

	void UpdateGameplay()
	{
		if (!isGameOver)
		{
			entities::UpdateShip(P1);
			entities::UpdateObstacle(Obs);

			if (engine::CollisionRecRec(P1.pos, P1.size, Obs.pos, Obs.size))
			{
				isGameOver = true;
			}
		}
		else
		{
			if (IsKeyPressed(KEY_ENTER))
				InitGameplay();
		}
	}

	void DrawGameplay()
	{
		entities::DrawShip(P1);
		entities::DrawObstacle(Obs);

		if (isGameOver)
		{
			static int gameOverLength = MeasureText(loseMessage, fontSize);
			static int x = (GetScreenWidth() - gameOverLength) / 2;
			static int y = (GetScreenHeight() - fontSize) / 2;

			DrawText(loseMessage, x, y, fontSize, RED);
		}
	}
}