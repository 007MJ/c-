#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, T size, void (func)(T )){
    for (int i = 0; i < size ; i ++)
    {
        func(array[i]);
    }
}


#endif 