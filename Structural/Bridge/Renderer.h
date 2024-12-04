#pragma once
#include <iostream>
namespace Bridge {
    // ��������� Renderer
    class Renderer {
    public:
        virtual void render() = 0;
    };

    //���������� Renderer ���������
    class VectorRenderer : public Renderer {
    public:
        void render() override {
            std::cout << "Rendering as a vector\n";
        }
    };

    //���������� Renderer  ���������
    class RasterRenderer : public Renderer {
    public:
        void render() override {
            std::cout << "Rendering as a raster\n";
        }
    };


}

