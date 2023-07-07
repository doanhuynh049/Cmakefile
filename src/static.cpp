#include <iostream>
#include "../include/static.h"
int StaticClass::count = 0;
int factorial(int n)
{
    static int cout = 1;
    std::cout << "Function call: " << cout << std::endl;
    cout++;
    if (n == 0 | n == 1)
    {
        return 1;
    }
    else
        return n * factorial(n - 1);
}
void implementStatic()
{
    StaticClass obj1;
    StaticClass obj2;
    StaticClass obj3;

    // obj1.var = 10;
    std::cout << obj1.count << std::endl;
    std::cout << obj2.count << std::endl;
    std::cout << obj3.count << std::endl;
}