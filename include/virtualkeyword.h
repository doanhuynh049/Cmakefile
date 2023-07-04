#ifndef VIRTUAL_KEYWORD_H
#define VIRTUAL_KEYWORD_H
class Base{
    public:
    virtual void print() const{
        std::cout <<"Base class"<<std::endl;
    }
    void show(){
        std::cout<< "show Base class" <<std::endl;
    }
};
class Derived: public Base{
public:
    void print() const override{
        std::cout<< "Derived class" <<std::endl;
    }
    void show(){
        std::cout<< "show Derived class" <<std::endl;
    }
};
void virtualkeyword();
#endif