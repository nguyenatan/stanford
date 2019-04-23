#ifndef _UTILITY_H
#define _UTILITY_H 1

#include <iostream>

// Nhap mang.
template <typename T>
void input(T array, size_t size)
{
    for (size_t i = 0; i < size; ++i)
        std::cin >> array[i];
}

// Xuat mang.
template <typename T>
void output(const T array, size_t size)
{
    for (size_t i = 0; i < size; ++i)
        std::cout << array[i] << (i != size-1 ? " " : "\n");
}

#endif