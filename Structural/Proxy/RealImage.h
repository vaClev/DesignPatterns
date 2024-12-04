#pragma once
#include "Image.h"
#include <iostream>
// Step 2: Implement the Real Object
class RealImage : public Image {
private:
	std::string filename;
public: 
	RealImage(const std::string& filename) : filename(filename) {
		// Simulate loading the image (this can be a resource-intensive operation)
		std::cout << "Loading image: " << filename << std::endl;
	}
	void display() override {
		std::cout << "Displaying image: " << filename << std::endl;
	}
};
