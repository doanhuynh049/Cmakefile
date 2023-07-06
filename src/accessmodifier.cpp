#include <iostream>
#include "../include/accessmodifier.h"
void executeAcessModifier()
{
    AccessModifier obj;
    obj.publicData = 10;
    obj.publicMethod();
    // obj.privateData = 10;  // error:‘int AccessModifier::privateData’ is
    // // private within this context
    // obj.privateMethod();  // error:‘void
    // // AccessModifier::privateMethod()’ is private within this context
    // obj.protectedData = 10;  // error:‘int AccessModifier::protectedData’ is
    // // protected within this context
    // obj.protectedMethod();  // error: ‘void
    // AccessModifier::protectedMethod()’ is protected within this context
}