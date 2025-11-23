# Projectile2D
Runs the 2D projectile simulation. A window will open showing the projectile(s) moving, updating at 60 FPS. Close the window to exit the program.
This project uses **C++**, **CMake**, and **raylib**.

## Requirements
- A C++ compiler (Clang or GCC both work)
- CMake 4.2.0
- raylib installed on your system
- Linux system with X11 (because raylib requires it)

If you're using Arch Linux, install raylib:
sudo pacman -S raylib

CMakeLists sets:
set(CMAKE_CXX_COMPILER "clang++")
So by default it will use **Clang**.  
If you want to use GCC instead, delete that line and CMake will use g++ automatically.

## Build & Run
```bash
mkdir build
cd build
cmake ..
make
./Projectile2D
