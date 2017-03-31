#include <iostream>
#include <vector>
#include <string.h>

#include "institute.h"
#include "student.h"
#include "teacher.h"

int main()
{
    try{
        setlocale(LC_ALL, "rus");
        std::string welcome;
        Institute institute;

        Student student1("Ivan"), student2("Petr"), student3("Maxim"), student4("Natasha"), student5("Rita");
        Teacher teacher("Anna");

        welcome = student1.Hello();
        institute.add(welcome); //Add student
        welcome = student2.Hello();
        institute.add(welcome);
        welcome = student3.Hello();
        institute.add(welcome);
        welcome = student4.Hello();
        institute.add(welcome);
        welcome = student5.Hello();
        institute.add(welcome);
        welcome = teacher.Hello();
        institute.add(welcome);
        institute.print(); //print student
    }
    catch(const char *err){
        std::cout << err;
    }

    return 0;
}
