#pragma once

#include <iostream>
#include <vector>
#include <string.h>


class Human
{
protected:
    std::string name;
public:
    Human();
    Human(std::string names);
    virtual std::string Hello();
};
