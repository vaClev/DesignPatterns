#pragma once
#include "Image.h"
#include "RealImage.h"
class ImageProxy : public Image {
private:
	RealImage* realImage; // указатель на Real Object   -- к которому обратимся если надо
	std::string filename;
public:
	ImageProxy(const std::string& filename) : filename(filename) {
		realImage = nullptr;
	} //сохраним параметр для инициализации  -- по пока установим realImage в nullptr  
	//---- будет нужен --тогда и инициализируем
	void display() override {
		// Lazy init .  Proxy проверит RealObject isСreated? загрузит если необходимо
		if (realImage == nullptr) {
			realImage = new RealImage(filename);
		}
		realImage->display();
	}

};
