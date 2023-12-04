#pragma once
#include <array>
#include <iostream>
#include <stdexcept>


/*
    NVector is a structure to hold the basic data of a n dimension array
    to represent a vector data (points, vectors 2d and 3d, colors etc), 
    for the Snake engine usually will represents 2d (position and uvs), 
    3d (point normals, colors) or 4d (homogenous candidates or color with alpha)
    but it is not limited to that.
*/
template <typename T, size_t N>
struct NVector
{

    std::array<T, N> data;
   
    NVector() : data({}) {}
    

    // constant function return the size fo data.
    
    size_t GetSize() const
    {
        return N;
    }
    

    T& operator[](size_t index)
    {
        if (index >= N)
        {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }
};