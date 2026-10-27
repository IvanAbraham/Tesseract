#pragma once
#include <raylib.h>

namespace tesseract::entities
{
	struct Obstacle
	{
		Vector2 size;
		Vector2 pos;
		float speed;
	};

	void InitObstacle(Obstacle& obstacle);
	void UpdateObstacle(Obstacle& obstacle);
	void DrawObstacle(Obstacle& obstacle);
}