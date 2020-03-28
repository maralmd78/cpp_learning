//
// Created by maral on 3/24/2020.
//

#ifndef PART1_STUDENT_H
#define PART1_STUDENT_H

#include "person.h"

class Student : public Person
        {
public:
            int grade;
            int average;


            Student();
            Student(int a, int b);
            Student(const Student & object);


             void who_am_i();


};


#endif //PART1_STUDENT_H
