#pragma once
#include <raylib.h>

namespace tesseract::entities
{
	struct Obstacle
	{
		Vector2 size;
		Vector2 pos;
		Vector2 topPos;
		float speed;
		float gap;
	};

	void InitObstacle(Obstacle& obstacle);
	void UpdateObstacle(Obstacle& obstacle);
	void DrawObstacle(Obstacle& obstacle);
}