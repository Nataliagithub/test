#include <iostream>
#include <vector>
#include <string.h>

#include "student.h"


Student::Student() : Human(){
    throw("Err\n");
}
Student::Student(std::string nam) : Human(nam){}

std::string Student::Hello(){
    std::string hi = "Я студент ";
    hi += name;
    return hi;
}
