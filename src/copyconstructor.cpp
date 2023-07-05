#include <iostream>
#include "../include/copyconstructor.h"
void TestShallowCopy::setData(int x, int y, int z)
{
    a = x;
    b = y;
    *p = z;
}
void TestShallowCopy::displayData()
{
    std::cout << "Data x " << a << "\nData y: " << b << "\nData *p: " << *p
              << std::endl;
}
void executeCopyConstructor()
{
    TestShallowCopy t1;
    t1.setData(2, 6, 8);
    TestShallowCopy t2 = t1;

    std::cout << "Before change: " << std::endl;
    t1.displayData();
    t2.displayData();
    t1.setData(3, 2, 9);

    std::cout << "After change: " << std::endl;
    t1.displayData();
    t2.displayData();
}