#include "ship.h"

namespace tesseract::entities
{
	void InitShip(Ship& Player)
	{
		Player.size = { (GetScreenWidth() / 10.0f), (GetScreenHeight() / 15.0f) };
		Player.pos = { (Player.size.x + 30.0f), (GetScreenHeight() / 2.0f) };
		Player.speed = 250.0f;
	}

	void UpdateShip(Ship& Player)
	{
		if (IsKeyDown(KEY_UP))
			Player.pos.y -= Player.speed * GetFrameTime();
	
		if(IsKeyDown(KEY_DOWN))
			Player.pos.y += Player.speed * GetFrameTime();
	}

	void DrawShip(Ship& Player)
	{
		DrawRectangleV(Player.pos, Player.size, RED);
	}
}
