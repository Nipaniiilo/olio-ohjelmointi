#include "chef.h"

Chef::Chef(const string &newName):name(newName)
{
    cout<<"Chef "<<name<<" konsturktori"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}

string Chef::getName() const
{
    return name;
}


void Chef::makeSalad() const
{
    cout<<"Chef "<<name <<" makes salad"<<endl;
}

void Chef::makeSoup() const
{
    cout<<"Chef "<<name <<" makes soup"<<endl;
}
