#ifndef CONSTRUCTOR_H
#define CONSTRUCTOR_H
class Person
{
   public:
    Person() : strName("no"), iAge(0) {}  // default constructor (no paramater)
    Person(std::string name, int age)
        : strName(name), iAge(age) {}  // paramterized constructor
    // Person(const Person& other) : strName(other.strName), iAge(other.iAge) {}
    // copy constructor
    void displayInfor();
    void setAge(int age);

   private:
    std::string strName;
    int iAge;
};
void executeContructor();
#endif