#include "scene_manager.h"
#include "gameplay.h"	
#include "main_menu.h"
#include "credits.h"

namespace tesseract::scenes
{

	static Scenes activeScene;

	void InitScene()
	{
		switch (activeScene)
		{
		case Menu:
			InitMainMenu();
			break;

		case Game:
			InitGameplay();
			break;

		case Tutorial:
			break;

		case Settings:
			break;

		case Credits:
			InitCredits();
			break;
		}
	}

	void UpdateScene()
	{
		switch (activeScene)
		{
		case Menu:
			UpdateMainMenu();
			break;

		case Game:
			UpdateGameplay();
			break;

		case Tutorial:
			break;

		case Settings:
			break;

		case Credits:
			UpdateCredits();
			break;
		}
	}

	void DrawScene()
	{
		switch (activeScene)
		{
		case Menu:
			DrawMainMenu();
			break;

		case Game:
			DrawGameplay();
			break;

		case Tutorial:
			break;

		case Settings:
			break;

		case Credits:
			DrawCredits();
			break;
		}
	}

	void ChangeScene(Scenes newScene)
	{
		activeScene = newScene;
		InitScene();
	}

	bool ShouldExit()
	{
		return activeScene == Exit;
	}
}