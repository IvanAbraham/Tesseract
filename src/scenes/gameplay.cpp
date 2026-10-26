#include "gameplay.h"

namespace scene
{
	entity::Ship P1;

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