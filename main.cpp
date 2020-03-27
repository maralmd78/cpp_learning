#include <iostream>
#include "person.h"
#include "student.h"



int main() {
   student maral;
   maral.who_am_i();


   person *melika = new student;
   melika->who_am_i();






    return 0;
}
