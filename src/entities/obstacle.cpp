#include "obstacle.h"

namespace tesseract::entity
{
	static const float ObstWidthRatio = 16.0f;    
	static const float ObstHeightRatio = 2.0f;    
	static const float ObstSpeed = 300.0f;         

	static void ResetPos(Obstacle& obstacle);

	void InitObstacle(Obstacle& obstacle)
	{
		obstacle.pos = {0, 0};
		obstacle.size = { static_cast<float>(GetScreenWidth()) / ObstWidthRatio, static_cast<float>(GetScreenHeight()) / ObstHeightRatio };
		obstacle.speed = ObstSpeed;
	}
	
	void UpdateObstacle(Obstacle& obstacle)
	{
		obstacle.pos.x -= obstacle.speed * GetFrameTime();

		if (obstacle.pos.x + obstacle.size.x <= 0)
			ResetPos(obstacle);
	}
	
	void DrawObstacle(Obstacle& obstacle)
	{
		DrawRectangleV(obstacle.pos, obstacle.size, BLACK);
	}

	void ResetPos(Obstacle& obstacle)
	{
		int maxY = static_cast<int>(GetScreenHeight() - obstacle.size.y);
		int minY = static_cast<int>(GetScreenHeight() - obstacle.size.y / 5);
		obstacle.pos.y = static_cast<float>(GetRandomValue(minY, maxY));
		obstacle.pos.x = static_cast<float>(GetScreenWidth());
	}
}