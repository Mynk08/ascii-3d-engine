#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include <string>

class Camera;
class Mesh;

class Renderer {
public:
    Renderer(int width, int height);
    void Clear();
    void RenderMesh(const Mesh& mesh, const Camera& camera);
    void Display();

private:
    int width, height;
    std::vector<std::vector<char>> buffer;
    std::vector<std::vector<float>> depthBuffer;

    char GetShadeChar(float depth);
};

#endif
