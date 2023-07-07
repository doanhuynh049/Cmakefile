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
    // int x = 0;
    // if (x == 0)
    // {
    //     static StaticClass obj1;
    // }
    // std::cout << "End of main" << std::endl;
    StaticClass::print();
}