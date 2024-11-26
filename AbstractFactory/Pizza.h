#pragma once
// Abstract Product Interface
class Pizza
{
public:
    virtual void bake() = 0; //  "=0" - чисто виртуальная функция --- обязана быть определена в наследниках
    virtual void cut() = 0;
    virtual void box() = 0;
};

