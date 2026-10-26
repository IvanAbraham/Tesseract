#include "ship.h"

namespace entity
{
	void InitShip(Ship& Player)
	{
		Player.size = { (GetScreenWidth() / 10.0f), (GetScreenHeight() / 15.0f) };
		Player.pos = { (Player.size.x + 30.0f), (GetScreenHeight() / 2.0f) };
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
