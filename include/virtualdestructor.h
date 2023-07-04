#ifndef VIRTUAL_DESTRUCTOR_H
#define VIRTUAL_DESTRUCTOR_H

class BaseDestructor {
public:
    BaseDestructor();
    virtual ~BaseDestructor();
};

class DerivedDestructor : public BaseDestructor {
public:
    DerivedDestructor();
    ~DerivedDestructor() override;
};

void implementDestructor();

#endif