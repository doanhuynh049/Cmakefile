#include <iostream>
#include "../include/shape.h"
Shape::Shape(int l, int w):length(l), width(w){}
int Shape::getArea() const {
    std::cout<<"This is call to parent class area \n"<<std::endl;
    return 0;
}
Square::Square(int l , int w ):Shape(l,w){}
int Square::getArea() const {
    std::cout << "Rectangle area: " << length*width << std::endl;
    return (length*width);
}

Rectangle::Rectangle(int l, int w):Shape(l,w){}
int Rectangle::getArea() const {
    std::cout << "Rectangle area: " << length*width << std::endl;
    return (length*width);
}

BasePure::BasePure(int i){
     x = i;
    std::cout<<"Constructor of bass is called:"<<x<<std::endl;
}
DerivedPure::DerivedPure(int i, int j ):BasePure(i){
            y = j;
}
void DerivedPure::func(){
    std::cout <<" x =" <<x <<" y =" <<y <<std::endl;
}

void inplementingShape(){
    Shape *s ;
    Square sq(5, 5);
    Rectangle rec(4,5);
    s= &sq;
    s->getArea();
    s=&rec;
    s->getArea();
    DerivedPure pure(1,2);
    pure.func();
    BasePure *pure1 = new DerivedPure(1,3);
    pure1->func();
}
