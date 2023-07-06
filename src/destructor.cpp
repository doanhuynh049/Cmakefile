#include <iostream>
#include "../include/destructor.h"
int count = 0;

testDestructor::testDestructor(int number)
{
    m_number = new int[number];
    m_size = number;
    std::cout << "Constructor executed";
    count++;
    std::cout << "\t No. Object: " << count << std::endl;
}
testDestructor::~testDestructor()
{
    delete[] m_number;
    std::cout << "Destructor executed";
    count--;
    std::cout << "\t No. Object: " << count << std::endl;
}
void doDestructor() { testDestructor t1(1), t2(3), t3(4), t4(49); }