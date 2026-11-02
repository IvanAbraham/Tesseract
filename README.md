# Tesseract

Tesseract is a *Flappy Bird*-style game with a techno aesthetic, developed in C++ with
[raylib](https://www.raylib.com/).

You control a ship that must fly through the gap in the obstacles coming from the right.
If you crash or fall below the screen, you lose.

> Assignment for **Práctica Profesional I: Desarrollo de Videojuegos I**, Image Campus, 2026.
> The game is developed iteratively: each version adds new features.

## Current version: 0.2

- Gravity and jump: the ship falls constantly and jumps at the press of a key.
- The ceiling stops the ship; falling below the screen is a loss.
- Two-part obstacle (top and bottom) with a gap of variable height and size.
- Main menu with options to play, view the credits and exit.
- Credits screen.
- After a Game Over you can retry, and you can return to the menu at any time during a run.

## Controls

| Key | Action |
|---|---|
| Space | Jump |
| Enter | Retry after losing |
| M | Return to menu |
| Left click | Select a menu option |
| Esc | Close the game |

## Version history

- **0.2**: gravity and jump, two-part obstacle, main menu and credits.
- **0.1**: controllable ship, one obstacle and a lose condition with Game Over.

## How to build

1. Clone the repository.
2. Open `Tesseract.slnx` with Visual Studio.
3. Select the **Debug** or **Release** configuration on **x64**.
4. Build and run (F5).

raylib 6.2 is already included in `lib/`, so there is nothing else to install.

## Downloads

The executables for each version are available in the
[Releases](https://github.com/IvanAbraham/Tesseract/releases) section.

## Author

**Ivan Abraham** ([GitHub](https://github.com/IvanAbraham))
