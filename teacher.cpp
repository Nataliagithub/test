#include <iostream>
#include <vector>
#include <string.h>

#include "teacher.h"


Teacher::Teacher() : Human(){
    throw("Err\n");
}
Teacher::Teacher(std::string nam1) : Human(nam1){}

std::string Teacher::Hello(){
    std::string salut = "Я учитель ";
    salut += name;
    return salut;
}

