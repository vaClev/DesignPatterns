#pragma once
class PageObject {
public:
    virtual void Add(PageObject a) {}
    virtual void Remove() {}
    virtual void Delete(PageObject a) {}
};