#include <iostream>
#include "../include/virtualdestructor.h"

BaseDestructor::BaseDestructor(){
    std::cout << "constructing BaseDestructor" << std::endl;
}
BaseDestructor::~BaseDestructor(){
    std::cout <<"Destructing BaseDestructor" << std::endl;
}
DerivedDestructor::DerivedDestructor(){
    std::cout << "Constructing DerivedDestructor " <<std::endl;
}
DerivedDestructor::~DerivedDestructor(){
    std::cout <<"Destructing DerivedDestructor " <<std::endl;
}
void implementDestructor(){
    DerivedDestructor *d = new DerivedDestructor();
    BaseDestructor *b = d;
    delete b;
}
