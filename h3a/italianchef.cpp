#include "italianchef.h"


ItalianChef::ItalianChef(const string &newName): Chef(newName)
{
    cout<<"ItalianChef "<<getName()<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<getName()<<" destruktori"<<endl;

}

void ItalianChef::makePasta() const
{
    cout<<"ItalianChef "<<getName()<<" makes pasta"<< endl;
}

