#ifndef SHAPE_H
#define SHAPE_H
class Shape{
    public: 
        Shape(int l, int w); // parameterized constructor
        virtual ~Shape() = default; //Virtual destructor to ensure proper
                                    // destruction of derived objects
        virtual int getArea() const;
        int length, width; 
};
class Square:public Shape{
    public: 
    Square(int l=0, int w= 0);//contructor
        //declaring and initializing derived class 
    int getArea() const override;
};
class Rectangle:public Shape{
    public:
    Rectangle(int l=0 , int w=0);
    int getArea() const override; // const qualify and override keyword to indicate
    // they are overriding the virtual function in the base class
};
void inplementingShape();

class BasePure{
    protected:
    int x;
    public:
    virtual void func()=0;
    BasePure(int i );
};

class DerivedPure: public BasePure{
    private: 
        int y;
    public :
        DerivedPure(int i, int j );
        void func();
};
#endif