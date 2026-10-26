#pragma once
#include "../engine/physics.h"

namespace entity
{
	struct Ship
	{
		Vector2 size;
		Vector2 pos;
		float gravity;
	};

	void InitShip(Vector2 screenSize, Ship& Player);
	void UpdateShip(Ship& Player);
	void DrawShip(Ship& Player);
}
