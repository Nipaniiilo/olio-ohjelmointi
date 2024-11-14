#include "cat.h"

string cat::getOwner() const
{
    return owner;
}

void cat::setOwner(const string &newOwner)
{
    owner = newOwner;
}

cat::~cat()
{
cout<<"cat luokan olio tuhottiin tääki :DD"<<endl;
}

void cat::printData()
{
    cout<<"*******************************"<<endl;
    cout<<"kissan vari="<<this->getColor()<<"ja paino="<<this->getWeight()<<endl;
    cout<<"kissan omistaja="<<owner<<endl;
    cout<<"*******************************"<<endl;
}

cat::cat() {
    cout<<"cat luokan olio luotiin"<<endl;
}

cat::cat(int w, string c, string):animal(w,c)
{
    this->setWeight(w);
    this->setColor(c);
}
