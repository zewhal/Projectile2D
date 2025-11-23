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

    void UpdatePosition(float kGravity, float deltaTime){
        // TODO: Add collision to wall
        velY += kGravity * deltaTime;
        posX += velX * deltaTime;
        posY += velY * deltaTime;
    }

    void Draw(){
        DrawCircleV({posX, posY}, radius, RED);
    }
};


int main() {
    const int kWidth = 750;
    const int kHeight = 750;
    const float kGravity = 50.0f;
    InitWindow(kWidth, kHeight, "Projectile2D");
    SetTargetFPS(60);

    Ball ball{
        50,
        kHeight - 50,
        200,
        -200,
        50
    };
    while (!WindowShouldClose()) {
        float deltaTime = GetFrameTime();
        ball.UpdatePosition(kGravity, deltaTime);
        
        BeginDrawing();
        ClearBackground(BLACK);
        ball.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
