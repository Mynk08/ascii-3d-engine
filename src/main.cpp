// ASCII 3D Engine Entry Point
#include <iostream>
#include <vector>
#include <cmath>
#include "renderer.h"
#include "camera.h"
#include "mesh.h"

int main() {
    const int screenWidth = 120;
    const int screenHeight = 40;

    Renderer renderer(screenWidth, screenHeight);
    Camera camera(0, 0, -5);

    // Create a cube mesh
    Mesh cube = Mesh::CreateCube();

    float angle = 0.0f;

    while (true) {
        // Clear screen
        renderer.Clear();

        // Rotate cube
        cube.Rotate(0.02f, 0.03f, 0.01f);

        // Render mesh
        renderer.RenderMesh(cube, camera);

        // Display
        renderer.Display();

        angle += 0.01f;
    }

    return 0;
}
