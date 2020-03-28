//
// Created by maral on 3/24/2020.
//
#include <iostream>
#include "student.h"

Student ::Student(): Person()
{
    grade = 0;
    average = 0;
}
Student ::Student(int a, int b): Person()
{
    grade = a;
    average = b;
}

Student ::Student(const Student & object): Person()
{
    age = object.age;
    average = object.average;
}

void Student :: who_am_i() {
    std::cout<<"i am a Student"<<std::endl;
}
