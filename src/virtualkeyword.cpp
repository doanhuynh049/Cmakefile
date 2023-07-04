#include <iostream>

#include "../include/virtualkeyword.h"


void virtualkeyword(){
    Base *p = new Base();
    Derived *d = new Derived();
    Base *bd = new Derived();
    p->print();     //Base class
    d->print();     //Derived class
    bd->print();    //Derived class
    bd->show();    //Show Base class
    // std::cout << bd.vptr() << std::endl;
    delete p;
    delete d;
    delete bd;
}