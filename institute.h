#pragma once

#include <iostream>
#include <vector>
#include <string.h>

class Institute
{
private:
    std::vector<std::string> people;
public:
    void add(const std::string man);
    void print();

};
