//
// Created by maral on 3/23/2020.
//

#ifndef PART1_PERSON_H
#define PART1_PERSON_H


#include <string>

class person {
public:
    std::string firstName;
    std::string lastName;
    int age;
    std::string socialNumber;


    person();
    person(std::string a,std::string b,int c ,std::string d ="not assigned");
    person(const person & object);

    void set_name(std::string e,std::string f);
    void set_age(int g);
    void set_social(std::string h);
    void who_am_i();






};


#endif //PART1_PERSON_H
