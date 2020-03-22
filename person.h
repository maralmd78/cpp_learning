#include <string>

//
// Created by maral on 3/18/2020.
//
class person{
private:
    std::string firstName;
    std::string lastName;
    int age;
    std::string socialNumber;

public:
    person()
    {
        firstName = "not assigned";
        lastName = "not assigned";
        socialNumber = "not assigned";
        age = -1;

    }

    person(std::string a,std::string b,int c ,std::string d)
    {
        firstName = a;
        lastName = b;
        age = c;
        socialNumber = d;

    }

    person(const person & object)
    {
        firstName = object.firstName;
        lastName = object.lastName;
        age = object.age;
        socialNumber = object.socialNumber;
    }





    std::string set_name()
    {
        return lastName;


    }
    int set_age()
    {
        return age;
    }
/*
    person(std::string e,std::string f,int g,std::string h)
    {
        firstName = e;
        lastName = f;
        age = g;
        socialNumber = h;
    }
    */
};
#ifndef PART1_PERSON_H
#define PART1_PERSON_H

#endif //PART1_PERSON_H
