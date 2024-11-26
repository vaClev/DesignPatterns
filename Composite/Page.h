#pragma once
#include <iostream>
#include "PageObject.h"
class Page : public PageObject {
public:
    void Add(PageObject a)
    {
        std::cout << "something is added to the page" << std::endl;
    }
    void Remove()
    {
        std::cout << "something is removed from the page"
            << std::endl;
    }
    void Delete(PageObject a)
    {
        std::cout << "something is deleted from page " << std::endl;
    }
};