#pragma once
#include "Shape.h"
namespace FactoryMethod {
	// Abstract creator class
	class ShapeFactory
	{
	public:
		virtual Shape* createShape() = 0;
		virtual ~ShapeFactory() {} // Virtual destructor for polymorphism
	};
}



