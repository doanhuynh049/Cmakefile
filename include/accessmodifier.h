#ifndef ACCESS_MODIFIER_H
#define ACCESS_MODIFIER_H
class AccessModifier
{
   public:
    int publicData;
    void publicMethod()
    {
        publicData = 1;
        privateData = 2;
        protectedData = 3;
    }

   private:
    int privateData;
    void privateMethod()
    {
        privateData = 4;
        publicData = 4;
    }

   protected:
    int protectedData;
    void protectedMethod()
    {
        protectedData = 5;
        publicData = 6;
    }
};
void executeAcessModifier();

#endif