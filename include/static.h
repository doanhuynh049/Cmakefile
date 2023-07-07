#ifndef STATIC_H
#define STATIC_H
int factorial(int n);
class StaticClass
{
   public:
    static int count;
    int id;
    StaticClass()
    {
        id = count++;
        std::cout << "Constructing object with id " << id << std::endl;
    }
    ~StaticClass()
    {
        std::cout << "Destructing object with id " << id << std::endl;
    }
};
void implementStatic();
#endif