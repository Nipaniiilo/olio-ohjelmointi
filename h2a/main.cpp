#include "car.h"
#include <iostream>
#include <memory>
#include "rectangle.h"
#include"student.h"
using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("BMW");
    objCar.setModel("530");
    objCar.setYearModel(2003);

    objCar.printData();


    Rectangle *objRec1= new Rectangle;
    objRec1->setWidth(25);
    objRec1->setHeight(15);
    cout<<"Area: "<<objRec1->getArea()<<endl;
    cout<<"Circum: "<<objRec1->getCircum()<<endl;

    delete objRec1;

    unique_ptr<Student> objectStudent = make_unique<Student>();
    objectStudent->setName("Kimmo");
    objectStudent->setStudentNumber(6588);
    objectStudent->setAverage(3.8);

    cout<<"Student name: "<<objectStudent->getName()<<endl;
    cout<<"Studend Number: "<<objectStudent->getStudentNumber()<<endl;
    cout<<"Student average: "<<objectStudent->getAverage()<<endl;





    return 0;
}
