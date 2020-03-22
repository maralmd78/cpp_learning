#include <iostream>
#include "person.h"
#include "person.cpp"


int main() {
    person obj("maral","mordad",21);
    std::cout<<"firstName: "<< obj.firstName <<std::endl;
    person obj2(obj);
    std::cout<<" obj2:"<<obj2.firstName<<std::endl;
    obj.who_am_i();
    return 0;
}
