#include "animal.h"

Animal::Animal() {}

void Animal::callOut() const {
    cout<<"Elain aantelee."<<endl;
}

Animal::~Animal()
{
    cout<<"Animal olio tuhottu!"<<endl;
}
