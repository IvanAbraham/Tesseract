#include "scene_manager.h"
#include "gameplay.h"	

namespace tesseract::scenes
{

	static Scenes activeScene;

	void InitScene()
	{
		switch (activeScene)
		{
		case Menu:
			break;

		case Game:
			InitGameplay();
			break;

		case Tutorial:
			break;

		case Settings:
			break;

		case Credits:
			break;
		}
	}

	void UpdateScene()
	{
		switch (activeScene)
		{
		case Menu:
			break;

		case Game:
			UpdateGameplay();
			break;

		case Tutorial:
			break;

		case Settings:
			break;

		case Credits:
			break;
		}
	}

	void DrawScene()
	{
		switch (activeScene)
		{
		case Menu:
			break;

		case Game:
			DrawGameplay();
			break;

		case Tutorial:
			break;

		case Settings:
			break;

		case Credits:
			break;
		}
	}

	void ChangeScene(Scenes newScene)
	{
		activeScene = newScene;
	}
}