#pragma once
#include<iostream>
#include <vector>
#include "PageObject.h"
class Copy : public PageObject {
    std::vector<PageObject> copyPages; //

public:
    void AddElement(PageObject a)
    {
        copyPages.push_back(a);
    }

    void Add(PageObject a)
    {
        std::cout << "something is added to the copy" << std::endl;
    }
    void Remove()
    {
        std::cout << "something is removed from the copy" << std::endl;
    }
    void Delete(PageObject a)
    {
        std::cout << "something is deleted from the copy";
    }
};