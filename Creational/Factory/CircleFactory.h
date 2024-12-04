#pragma once
#include "ShapeFactory.h"
#include "Circle.h"

namespace FactoryMethod {
	class CircleFactory : public ShapeFactory
	{
	public:
		Shape* createShape() override {
			return new Circle();
		}
	};
}


