#include "gameplay.h"
#include "entities/ship.h"
#include "entities/obstacle.h"

namespace tesseract::scene
{
	static entity::Ship P1;
	static entity::Obstacle Obs;

	void InitGameplay()
	{
		entity::InitShip(P1);
		entity::InitObstacle(Obs);
	}

	void UpdateGameplay()
	{
		entity::UpdateShip(P1);
		entity::UpdateObstacle(Obs);
	}

	void DrawGameplay()
	{
		entity::DrawShip(P1);
		entity::DrawObstacle(Obs);
	}
}