#ifndef DESTRUCTOR_H
#define DESTRUCTOR_H

class testDestructor
{
   public:
    testDestructor(int number);
    ~testDestructor();

   private:
    int *m_number;
    int m_size;
};
void doDestructor();
#endif