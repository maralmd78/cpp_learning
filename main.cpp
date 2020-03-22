#include <iostream>
#include "person.h"


int main() {
person maral("maral","mordad",12,"1111");
    std::cout <<"\nage::  "<<maral.set_age() << std::endl;
    std::cout <<"\nname::  "<<maral.set_name() << std::endl;
    return 0;
}
