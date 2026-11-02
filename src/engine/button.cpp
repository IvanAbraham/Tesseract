#include "button.h"
#include "engine/physics.h"

namespace tesseract::engine
{
	void InitButton(Button& button, Vector2 pos, Vector2 size, const char* text, int fontSize, Color color, Color textColor)
	{
		button.pos = pos;
		button.size = size;
		button.text = text;
		button.fontSize = fontSize;
		button.color = color;
		button.textColor = textColor;
	}

	bool IsButtonClicked(const Button& button)
	{
		return CollisionPointRec(GetMousePosition(), button.pos, button.size) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT);
	}

	void DrawButton(const Button& button)
	{
		DrawRectangleV(button.pos, button.size, button.color);

		int textWidth = MeasureText(button.text, button.fontSize);
		int textX = static_cast<int>(button.pos.x + (button.size.x - textWidth) / 2);
		int textY = static_cast<int>(button.pos.y + (button.size.y - button.fontSize) / 2);

		DrawText(button.text, textX, textY, button.fontSize, button.textColor);
	}
}