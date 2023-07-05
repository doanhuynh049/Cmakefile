#include <iostream>

#include "../include/template.h"
void myMaxTemplate()
{
    std::cout << myMax<int>(3, 4) << std::endl;
    std::cout << myMax<float>(3.7, 2.4) << std::endl;
    std::cout << myMax<char>('s', 'a') << std::endl;
}

template <typename T>
int binary_search(const std::vector<T> &arr, T key)
{
    int lo = 0, hi = arr.size() - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return -1;
}

void searchTemplateNumber()
{
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int key = binary_search(arr, 3);
    if (key == -1)
    {
        std::cout << "Key is not found" << std::endl;
    }
    else
    {
        std::cout << "Key is found at index " << key << std::endl;
    }
}

void searchTemplateString()
{
    std::vector<std::string> arr = {"apple", "banana", "cherry",
                                    "data",  "fruit",  "grape"};
    std::string key = "data";
    int index = binary_search(arr, key);
    if (index == -1)
    {
        std::cout << "Key is not found" << std::endl;
    }
    else
    {
        std::cout << "Key is found at index " << key << std::endl;
    }
}

void executeContainer()
{
    Container<int> c1(3);
    Container<float> c2(3.4);
    std::cout << c2.getvalue() << std::endl;
}