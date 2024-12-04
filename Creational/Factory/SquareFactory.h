#pragma once
#include "ShapeFactory.h"
#include "Square.h"

namespace FactoryMethod {
	class SquareFactory : public ShapeFactory
	{
	public:
		Shape* createShape() override {
			return new Square();
		}
	};
}


