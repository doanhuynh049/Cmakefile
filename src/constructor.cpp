#include <iostream>
#include "../include/constructor.h"
void Person::displayInfor()
{
    std::cout << "Name: " << strName << "\nAge: " << iAge << std::endl;
}
void Person::setAge(int age) { iAge = age; }
void executeContructor()
{
    Person quat("quat", 120);  // constructor is called automatically when
    quat.displayInfor();       // we create the object
    Person *nhat = new Person("Nhat", 96);
    nhat->displayInfor();
    delete nhat;
    Person *thanh = new Person();
    thanh->displayInfor();
    delete thanh;
    std::cout << "This is copy constructer" << std::endl;
    Person quan = quat;
    quat.displayInfor();
    std::cout << "Change the infor" << std::endl;
    quat.setAge(150);
    quat.displayInfor();
    quan.displayInfor();
}