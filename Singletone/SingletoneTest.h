#pragma once
#include "SingletoneClassExample.h"
class SingletoneTestProgram {
public:
	static void test() {
		// �������� ������ Singletone 
		Singleton& singleton = Singleton::getInstance(); //�������� ������ ������

		// ���������� ��� 
		singleton.someOperation();


		// Singleton anotherInstance; // ��� �� �������������� �.�. ����������� ����������
		// Singleton* anotherInstance = new Singletone(); // ��� �� �������������� �.�. ����������� ����������
	}
};