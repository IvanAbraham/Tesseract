#pragma once
#include <raylib.h>

namespace tesseract::engine
{
	bool CollisionRecRec(Vector2 pos1, Vector2 size1, Vector2 pos2, Vector2 size2);

	bool CollisionPointRec(Vector2 point, Vector2 rectPos, Vector2 rectSize);

	bool CollisionCircleCircle(Vector2 pos1, float radius1, Vector2 pos2, float radius2);

	bool TopScreenRecCol(Vector2 position);

	bool BottomScreenRecCol(Vector2 position, float screenHeight);

	bool RightScreenRecCol(Vector2 position, float screenWidth);

	bool LeftScreenRecCol(Vector2 position, Vector2 size);
}