#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
#include <string>

template <typename T>
void swap (T &a, T &b){
    T aux;
    aux = a;
    a = b;
    b = aux;
}

template <typename T>
T min (T const &a, T const &b){
 return( (a<b) ? a:b);
}

template <typename T>
T max (T const &a, T const &b){
   return( (a>b) ? a:b);
}

#endif