#include "gameplay.h"
#include "entities/ship.h"
#include "entities/obstacle.h"
#include "engine/physics.h"

namespace tesseract::scene
{
	static entity::Ship P1;
	static entity::Obstacle Obs;
	static bool isGameOver;

	static const int fontSize = 30;
	const char* loseMessage = "GAME OVER - Press enter to retry.";
	int gameOverLength = MeasureText(loseMessage, fontSize);
	int x = (GetScreenWidth() - gameOverLength) / 2;
	int y = (GetScreenHeight() - fontSize) / 2;


	void InitGameplay()
	{
		isGameOver = false;

		entity::InitShip(P1);
		entity::InitObstacle(Obs);
	}

	void UpdateGameplay()
	{
		if (!isGameOver)
		{
			entity::UpdateShip(P1);
			entity::UpdateObstacle(Obs);

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
		entity::DrawShip(P1);
		entity::DrawObstacle(Obs);

		if (isGameOver)
		{
			DrawText(loseMessage, x, y, fontSize, RED);
		}
	}
}