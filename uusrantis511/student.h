#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
private:
    string fname;
    string lname;
    string email;
public:
    //tyhjä constructor
    Student();
    //constructor joka ottaa parametrit
    Student(string, string, string);

    string getFname() const;
    string getLname() const;
    string getEmail() const;
    void setFname(const string &newFname);
    void setLname(const string &newLname);
    void setEmail(const string &newEmail);

    void studentInfo();
};

#endif // STUDENT_H
