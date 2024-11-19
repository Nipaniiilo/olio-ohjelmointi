#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal
{
public:
    Dog();
    void callOut() const override;
    ~Dog();
};

#endif // DOG_H
