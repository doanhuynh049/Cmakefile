#ifndef FRIEND_H
#define FRIEND_H

class MyFclass;  // forward declearation
class FriendClass
{
   public:
    void friendMethod(MyFclass obj);
};
class FriendClass1
{
   public:
    void memberMethod(MyFclass obj);
};
class MyFclass
{
   public:
    MyFclass(int data) : m_data(data) {}
    MyFclass() : m_data(0) {}
    int getData();

    friend class FriendClass;                  // declare friend class
    friend void friendFunction(MyFclass obj);  // define friend function
    friend void FriendClass1::memberMethod(
        MyFclass obj);  // define member function friend function

   private:
    int m_data;
};
void executeFriendClass();
void friendFunction(MyFclass obj);
#endif