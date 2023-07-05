#ifndef COPY_CONSTRUCTOR_H
#define COPY_CONSTRUCTOR_H
class TestShallowCopy
{
   private:
    int a;
    int b;
    int *p;

   public:
    TestShallowCopy() { p = new int; }
    void setData(int x, int y, int z);
    void displayData();
};
void executeCopyConstructor();

#endif