#pragma once

namespace tesseract::scenes
{
	enum Scenes { Menu, Game, Tutorial, Settings, Credits, Exit };

	void InitScene();
	void UpdateScene();
	void DrawScene();
	void ChangeScene(Scenes newScene);
	bool ShouldExit();
}
