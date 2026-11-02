#pragma once
#include <raylib.h>

namespace tesseract::engine
{
	struct Button
	{
		Vector2 pos;
		Vector2 size;
		const char* text;
		int fontSize;
		Color color;
		Color textColor;
	};

	void InitButton(Button& button, Vector2 pos, Vector2 size, const char* text, int fontSize, Color color, Color textColor);
	bool IsButtonClicked(const Button& button);
	void DrawButton(const Button& button);
}
