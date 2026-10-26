#include "gameplay.h"
#include "entities/ship.h"
#include "entities/obstacle.h"

namespace tesseract::scene
{
	static entity::Ship P1;

	void InitGameplay()
	{
		entity::InitShip(P1);
	}

	void UpdateGameplay()
	{
		entity::UpdateShip(P1);
	}

	void DrawGameplay()
	{
		entity::DrawShip(P1);
	}
}