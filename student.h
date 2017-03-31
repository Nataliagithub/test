#pragma once

#include <iostream>
#include <vector>
#include <string.h>

#include "human.h"

class Student : public Human
{
public:
    Student();
    Student(std::string nam);
    std::string Hello();
};

