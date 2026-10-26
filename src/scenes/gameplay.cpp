#include "gameplay.h"

namespace scene
{
	void InitGameplay(Vector2 screenSize, entity::Ship& P1)
	{
		entity::InitShip(screenSize, P1);
	}

	void UpdateGameplay(entity::Ship& P1)
	{
		entity::UpdateShip(P1);
	}

	void DrawGameplay(entity::Ship& P1)
	{
		entity::DrawShip(P1);
	}
}