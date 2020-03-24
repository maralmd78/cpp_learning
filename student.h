//
// Created by maral on 3/24/2020.
//

#ifndef PART1_STUDENT_H
#define PART1_STUDENT_H

#include "person.h"

class student : public person
        {
public:
            int grade;
            int average;


            student();
            student(int a,int b);
            student(const student & object);


};


#endif //PART1_STUDENT_H
