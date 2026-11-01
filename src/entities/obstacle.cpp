#include "obstacle.h"

namespace tesseract::entities
{
	static const float obstWidthRatio = 16.0f;    
	static const float obstHeightRatio = 1.5f;    
	static const float obstSpeed = 300.0f;         
	static const float biggerGapRatio = 2.0f;
	static const float smallestGapRatio = 5.0f;

	static void ResetPos(Obstacle& obstacle);

	void InitObstacle(Obstacle& obstacle)
	{
		obstacle.size = { static_cast<float>(GetScreenWidth()) / obstWidthRatio, static_cast<float>(GetScreenHeight()) / obstHeightRatio };
		obstacle.speed = obstSpeed;
		ResetPos(obstacle);
	}

	void UpdateObstacle(Obstacle& obstacle)
	{
		obstacle.pos.x -= obstacle.speed * GetFrameTime();
		obstacle.topPos.x = obstacle.pos.x;

		if (obstacle.pos.x + obstacle.size.x <= 0)
			ResetPos(obstacle);
	}
	
	void DrawObstacle(Obstacle& obstacle)
	{
		DrawRectangleV(obstacle.pos, obstacle.size, BLACK);
		DrawRectangleV(obstacle.topPos, obstacle.size, BLACK);
	}

	void ResetPos(Obstacle& obstacle)
	{
		int maxY = static_cast<int>(GetScreenHeight() - obstacle.size.y);
		int minY = static_cast<int>(GetScreenHeight());
		
		obstacle.pos.y = static_cast<float>(GetRandomValue(minY, maxY));
		obstacle.pos.x = static_cast<float>(GetScreenWidth());

		float minMargin = static_cast<float>(GetScreenHeight()) / biggerGapRatio;
		float maxMargin = static_cast<float>(GetScreenHeight()) / smallestGapRatio;

		obstacle.topPos.y = obstacle.pos.y - obstacle.size.y - GetRandomValue(static_cast<int>(minMargin), static_cast<int>(maxMargin));
		obstacle.topPos.x = obstacle.pos.x;
	}
}