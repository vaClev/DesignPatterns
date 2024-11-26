#pragma once
#include <iostream>
#include "Shape.h"

namespace FactoryMethod {
	class Square :public FactoryMethod::Shape
	{
		void draw() override {
			std::cout << "Drawing a Square" << std::endl;
		}
	};
}
