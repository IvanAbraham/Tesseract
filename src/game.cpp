#include "game.h"

namespace tesseract
{
	static void Init();
	static void Update();
	static void Draw();
	static void Close();

	void Run()
	{
		bool run;

		run = true;
		
		Init();

		while (run)
		{
			Update();
		}

		Close();
	}

	static void Init()
	{

	}

	static void Update()
	{
		Draw();
	}

	static void Close()
	{

	}

	static void Draw()
	{

	}
}
