#pragma once

#include <iostream>
#include <vector>
#include <string.h>

#include "human.h"

class Teacher : public Human
{
public:
    Teacher();
    Teacher(std::string nam1);
    std::string Hello();
};
