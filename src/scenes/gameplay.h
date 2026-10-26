#pragma once
#include "../entities/ship.h"
#include "../entities/obstacle.h"

namespace scene
{
	void InitGameplay(Vector2 screenSize, entity::Ship& P1);
	void UpdateGameplay(entity::Ship& P1);
	void DrawGameplay(entity::Ship& P1);
}