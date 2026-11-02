#pragma once

namespace tesseract::scenes
{
	enum Scenes { Menu, Game, Tutorial, Settings, Credits };

	void InitScene();
	void UpdateScene();
	void DrawScene();
	void ChangeScene(Scenes newScene);
}
