//
// Created by maral on 3/24/2020.
//

#include "student.h"

student ::student():person()
{
    grade = 0;
    average = 0;
}
student ::student(int a,int b):person()
{
    grade = a;
    average = b;
}

student ::student(const student & object):person()
{
    age = object.age;
    average = object.average;
}
