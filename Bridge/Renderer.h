#pragma once
#include <iostream>
namespace Bridge {
    // Интерфейс Renderer
    class Renderer {
    public:
        virtual void render() = 0;
    };

    //Реализация Renderer векторный
    class VectorRenderer : public Renderer {
    public:
        void render() override {
            std::cout << "Rendering as a vector\n";
        }
    };

    //Реализация Renderer  растровый
    class RasterRenderer : public Renderer {
    public:
        void render() override {
            std::cout << "Rendering as a raster\n";
        }
    };


}

