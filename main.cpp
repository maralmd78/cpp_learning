#include <iostream>
#include "person.h"
#include "student.h"



int main() {
    person obj("maral","mordad",21);
    std::cout<<"firstName: "<< obj.firstName <<std::endl;
    person obj2(obj);
    std::cout<<" obj2:"<<obj2.firstName<<std::endl;
    obj.who_am_i();



    student maral(1,16);
    std::cout<<"\n average:"<<maral.average<<std::endl;
    maral.set_social("1111");
 //  std::cout<<"\n socialNumber:"<< maral.set_social("1111")<<std::endl;

    student kian;
    std::cout<<"\n average"<< kian.average<<std::endl;


    student melika(maral);
    std::cout<<"\n average"<<melika.average<<std::endl;




    return 0;
}
