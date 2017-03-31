#include "institute.h"

#include <iostream>
#include <vector>
#include <string.h>

void Institute::add(const std::string man){
    people.push_back(man);
}

void Institute:: print(){
    std::vector<std::string>::iterator i;
    for(i = people.begin(); i < people.end(); i++)
        std::cout << *i << std::endl;
}
