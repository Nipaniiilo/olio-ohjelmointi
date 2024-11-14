#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class animal
{
private:
    int weight;
    string color;

public:
    animal();
    animal(int, string);
    int getWeight() const;
    void setWeight(int newWeight);
    string getColor() const;
    void setColor(const string &newColor);
    ~animal();

    virtual void printData();

protected:
    void Test();
};

#endif // ANIMAL_H
