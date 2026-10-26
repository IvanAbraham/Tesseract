#include "raylib.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Tesseract - raylib test");
    SetTargetFPS(60);

    Vector2 ballPosition = { screenWidth / 2.0f, screenHeight / 2.0f };
    const float ballRadius = 20.0f;
    const float ballSpeed = 300.0f;

    while (!WindowShouldClose())
    {
        float deltaTime = GetFrameTime();

        if (IsKeyDown(KEY_UP))
            ballPosition.y -= ballSpeed * deltaTime;
        if (IsKeyDown(KEY_DOWN))
            ballPosition.y += ballSpeed * deltaTime;

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawCircleV(ballPosition, ballRadius, MAROON);
        DrawText("raylib 6.2 funcionando", 10, 10, 20, DARKGRAY);
        DrawFPS(screenWidth - 90, 10);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

