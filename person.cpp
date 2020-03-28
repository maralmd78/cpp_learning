//
// Created by maral on 3/23/2020.
//
#include <iostream>
#include "person.h"

Person :: Person()
{

    firstName = "not assigned";
    lastName = "not assigned";
    socialNumber = "not assigned";
    age = -1;


}
Person :: Person(std::string a, std::string b, int c , std::string d )
{
    firstName = a;
    lastName= b;
    age = c;
    socialNumber = d;

}

Person :: Person(const Person & object)
{
    firstName = object.firstName;
    lastName = object.lastName;
    age = object.age;
    socialNumber = object.socialNumber;

}


void Person :: set_name(std::string e, std::string f)
{
    firstName = e;
    lastName = f;
}

void Person :: set_age(int g)
{
    age = g;
}

void Person :: set_social(std::string h)
{
    socialNumber = h;
   // return socialNumber;
}
void Person :: who_am_i(){
    std::cout<<"i am a Person"<<std::endl;
}





