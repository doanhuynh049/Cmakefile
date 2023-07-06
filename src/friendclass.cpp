#include <iostream>
#include "../include/friendclass.h"
int MyFclass::getData() { return m_data; }
void FriendClass::friendMethod(MyFclass obj)
{
    std::cout << "Data in MyFclass I can access from other class is: "
              << obj.m_data << std::endl;  // access private data member
}
void FriendClass1::memberMethod(MyFclass obj)
{
    std::cout << "Data in MyFclass I can access from member function of other "
                 "class is: "
              << obj.m_data << std::endl;  // access private data member
}

void friendFunction(MyFclass obj)
{
    std::cout << "Data in MyFclass I can access from function is: "
              << obj.m_data << std::endl;
}

void executeFriendClass()
{
    MyFclass obj(20);
    FriendClass friendclass;
    friendclass.friendMethod(obj);
    friendFunction(obj);
    FriendClass1 friendclass1;
    friendclass1.memberMethod(obj);

    int *ptr = reinterpret_cast<int *>(&obj);
    *ptr = 10;
    std::cout << obj.getData() << std::endl;
    delete ptr;
}
