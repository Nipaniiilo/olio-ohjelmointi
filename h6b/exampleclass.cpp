#include "exampleclass.h"

ExampleClass::ExampleClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"Start";
    connect(this, SIGNAL(readyToSay()),this,SLOT (sayHelloSlot()));
    //qDebug()<<"End";
    //En keksinyt muuta ratkaisua tähän kun siirtää 8.rivillä olevan koodin
    //tuonne startToWait paikkaan.

}

void ExampleClass::startToWait()
{
    QThread::msleep(1000);
    emit readyToSay();
    qDebug()<<"End";


}

void ExampleClass::sayHelloSlot()
{
     qDebug()<<"Terve";
}
