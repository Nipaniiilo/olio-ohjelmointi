#include "student.h"

#include <iostream>

using namespace std;

int main()
{
    Student *objStudent1=new Student;
    objStudent1->setFname ("jussi");
    objStudent1->setLname ("pulla");
    objStudent1->setEmail ("jussi.pulla@gmail.com");
    Student *objStudent2=new Student("teppo","testi", "teppo.testi@oma.com");

    objStudent1->studentInfo();
    objStudent2->studentInfo();

    delete objStudent1;
    objStudent1=nullptr;
    delete objStudent2;
    objStudent2=nullptr;
    return 0;
}
