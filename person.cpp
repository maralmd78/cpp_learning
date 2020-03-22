//
// Created by maral on 3/23/2020.
//

#include "person.h"

person :: person()
{

    firstName = "not assigned";
    lastName = "not assigned";
    socialNumber = "not assigned";
    age = -1;


}
person :: person(std::string a,std::string b,int c ,std::string d )
{
    firstName = a;
    lastName= b;
    age = c;
    socialNumber = d;

}

person :: person(const person & object)
{
    firstName = object.firstName;
    lastName = object.lastName;
    age = object.age;
    socialNumber = object.socialNumber;

}


void person :: set_name(std::string e,std::string f)
{
    firstName = e;
    lastName = f;
}

void person :: set_age(int g)
{
    age = g;
}

void person :: set_social(std::string h)
{
    socialNumber = h;
}
void person :: who_am_i(){
    std::cout<<"i am a person"<<std::endl;
}





