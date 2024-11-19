#ifndef CHEF_H
#define CHEF_H
#include<iostream>
using namespace std;

class Chef
{
private:
    string name;
public:
    Chef(const string &newName);
    ~Chef();
    string getName()const;
    void makeSalad() const;
    void makeSoup() const;
};

#endif // CHEF_H
