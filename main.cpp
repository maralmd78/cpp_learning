#include <iostream>
#include "person.h"

int main() {
    person maral;
    maral.firstName="Maral";
    maral.lastName="Mordad";
    maral.age=20;
    maral.socialNumber="1111";

    std::cout <<"firstName:  "<<maral.firstName << std::endl;
    std::cout <<"\nlastName:  "<<maral.lastName << std::endl;
    std::cout <<"\n age:  "<<maral.age << std::endl;
    std::cout <<"\nsocialNumber::  "<<maral.socialNumber << std::endl;
    return 0;
}
