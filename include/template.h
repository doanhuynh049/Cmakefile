#ifndef TEMPLATE_H
#define TEMPLATE_H
#include <vector>
template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
void myMaxTemplate();

template <typename T>
int binary_search(const std::vector<T>& arr, T key);
int implementBinarySearch();
void searchTemplateNumber();
void searchTemplateString();

template <typename T>
class Container
{
   public:
    Container() {}
    Container(T value) : m_value(value) {}
    T getvalue() { return m_value; }
    void setvalue(int value) { m_value = value; }

   private:
    T m_value;
};
void executeContainer();
#endif