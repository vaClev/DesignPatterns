#pragma once
#include "IceCream.h"
class VanillaIceCream : public IceCream {
public:
	std::string getDescription() const override{
		return "Vanilla Ice Cream";
	}
	double cost() const override { return 160.0; }
};