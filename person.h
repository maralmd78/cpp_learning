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

    person(std::string a,std::string b,int c ,std::string d) : firstName(a) ,lastName(b),age(c),socialNumber(d){}


    person(const person & object)
    {
        firstName = object.firstName;
        lastName = object.lastName;
        age = object.age;
        socialNumber = object.socialNumber;
    }



    void set_name(std::string e,std::string f)
    {
        firstName = e;
        lastName = f;
    }

    void set_age(int g)
    {
        age = g;
    }
    void set_social(std::string h)
    {
        socialNumber = h;
    }
    void who_am_i(){
        std::cout<<"i am a person"<<std::endl;
    }

};
#ifndef PART1_PERSON_H
#define PART1_PERSON_H

#endif //PART1_PERSON_H
