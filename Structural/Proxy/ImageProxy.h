#pragma once
#include "Image.h"
#include "RealImage.h"
class ImageProxy : public Image {
private:
	RealImage* realImage; // ��������� �� Real Object   -- � �������� ��������� ���� ����
	std::string filename;
public:
	ImageProxy(const std::string& filename) : filename(filename) {
		realImage = nullptr;
	} //�������� �������� ��� �������������  -- �� ���� ��������� realImage � nullptr  
	//---- ����� ����� --����� � ��������������
	void display() override {
		// Lazy init .  Proxy �������� RealObject is�reated? �������� ���� ����������
		if (realImage == nullptr) {
			realImage = new RealImage(filename);
		}
		realImage->display();
	}

};
