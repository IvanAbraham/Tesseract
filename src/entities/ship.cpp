#include "ship.h"

namespace entity
{
	void InitShip(Vector2 screenSize, Ship& Player)
	{
		Player.size = { (screenSize.x / 10.0f), (screenSize.y / 15.0f) };
		Player.pos = { (Player.size.x + 30.0f), (screenSize.y / 2.0f) };
		Player.gravity = 5.0f;
	}

	void UpdateShip(Ship& Player)
	{
		if (IsKeyDown(KEY_UP))
			Player.pos.y -= Player.gravity * GetFrameTime();
	
		if(IsKeyDown(KEY_DOWN))
			Player.pos.y += Player.gravity * GetFrameTime();
	}

	void DrawShip(Ship& Player)
	{
		DrawRectangleV(Player.pos, Player.size, RED);
	}
}
