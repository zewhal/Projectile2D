// COPYRIGHT (c) 2025 Zewhal
#include <raylib.h>



int main() {
    const int kWidth = 750;
    const int kHeight = 750;
    InitWindow(kWidth, kHeight, "Projectile2D");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
