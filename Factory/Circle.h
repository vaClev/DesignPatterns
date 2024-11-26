#pragma once
#include <iostream>
#include "Shape.h"

namespace FactoryMethod {
	class Circle :public Shape
	{
		void draw() override {
			std::cout << "Drawing a Circle" << std::endl;
		}
	};
}


