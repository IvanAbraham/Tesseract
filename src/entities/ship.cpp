#include "ship.h"

namespace tesseract::entities
{
	static const float defaultJumpPower = 500.0f;
	static const float defaultGravity = 1300.0f;
	
	void InitShip(Ship& Player)
	{
		Player.size = { (GetScreenWidth() / 10.0f), (GetScreenHeight() / 15.0f) };
		Player.pos = { (Player.size.x + 30.0f), (GetScreenHeight() / 2.0f) };
		Player.jumpPower = defaultJumpPower;
		Player.gravity = defaultGravity;
		Player.velocity = 0.0f;
	}

	void UpdateShip(Ship& Player)
	{
		Player.velocity += Player.gravity * GetFrameTime();
		
		if (IsKeyPressed(KEY_SPACE))
		{
			Player.velocity = -Player.jumpPower;
		}

		Player.pos.y += Player.velocity * GetFrameTime();
	}

	void DrawShip(Ship& Player)
	{
		DrawRectangleV(Player.pos, Player.size, RED);
	}
}
