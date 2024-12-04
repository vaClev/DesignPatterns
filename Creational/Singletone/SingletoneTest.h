#pragma once
#include "SingletoneClassExample.h"
class SingletoneTestProgram {
public:
	static void test() {
		// получаем объект Singletone 
		Singleton& singleton = Singleton::getInstance(); //Получаем именно ссылку

		// Используем его 
		singleton.someOperation();


		// Singleton anotherInstance; // Это не скомпилируется т.к. конструктор запривачен
		// Singleton* anotherInstance = new Singletone(); // Это не скомпилируется т.к. конструктор запривачен
	}
};