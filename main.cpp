#include <iostream>
#include "person.h"
#include "student.h"
#include "doctor.h"
#include "engineer.h"

void who_is_this_person(Person* p)
{
    p->who_am_i();
}

int main() {
    /*
   Student maral;
   maral.who_am_i();


   Person *melika = new Student;
   melika->who_am_i();
*/

    Student* student = new Student;
    Doctor* doctor = new Doctor;
    Engineer* engineer = new Engineer;

    who_is_this_person(student);
    who_is_this_person(doctor);
    who_is_this_person(engineer);









    return 0;
}
