#pragma once

#include <ostream>
#include <initializer_list>
#include "config.h"
using namespace std;

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector(){
        for(int i = 0; i < NDIM; i++){
            vect[i] = 0;
        }
    }
    Vector(std::initializer_list<int> list){
        int count = 0;
        for (int element : list) {
            vect[count] = element;
            ++count;
        }
    };
    // possibly more

// Public Member functions here
    const int& operator[](size_t x) const;
    int& operator[](size_t x);
    Vector& operator+=(const Vector& rhs);
    Vector& operator+=(int value);
    Vector& operator-=(const Vector& rhs);
    // ector& operator-=(int value);
    Vector& operator*=(const Vector& rhs);
    Vector& operator*=(const int& value);
    

private:
// Private Member functions here
    int vect[NDIM];
// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here
Vector operator+(const Vector &other, const Vector& rhs);
Vector operator-(const Vector &other, const Vector& rhs);
value operator*(const Vector &other, const Vector& rhs);
Vector operator*(const Vector &other, int value);
Vector operator*(int value, const Vector& rhs);
std::ostream& operator<<(std::ostream& os, const Vector& rhs);
