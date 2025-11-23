// COPYRIGHT (c) 2025 Zewhal
#include <raylib.h>

struct Ball {
    float posX;
    float posY;
    float velX;
    float velY;
    float radius;

    Ball(float x, float y, float vx, float vy, float r)
        : posX(x),
          posY(y),
          velX(vx),
          velY(vy),
          radius(r) {}
};


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
