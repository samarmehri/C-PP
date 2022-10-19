#include "vector.h"

const int& Vector::operator[](size_t x) const{
    if(x == 0)
        return vect[0];
    else
        return vect[1];
}

int& Vector::operator[](size_t x){
    if(x == 0)
        return vect[0];
    else
        return vect[1];
}

Vector& Vector::operator+=(const Vector& rhs){
    for (int i = 0; i < NDIM; i++) {
        vect[i] += rhs[i];
    }
    return *this;
}

//add value
Vector& Vector::operator+=(int value){
    for (int i = 0; i < NDIM; i++) {
        vect[i] += value;
    }
    return *this;
}

Vector& Vector::operator-=(const Vector& rhs){
    for (int i = 0; i < NDIM; i++) {
        vect[i] -= rhs[i];
    }
    return *this;
}

//retreive value
// Vector& operator-=(int value){
//     for (int i = 0; i < NDIM; i++) {
//         vect[i] -= value;
//     }
//     return *this;
// }

Vector& Vector::operator*=(const Vector& rhs) {
    for (int i = 0; i < NDIM; i++) {
        vect[i] *= rhs[i];
    }
    return *this;
}

Vector& Vector::operator*=(const int& value) {
    for (int i = 0; i < NDIM; i++) {
        vect[i] *= value;
    }
    return *this;
}

Vector operator+(const Vector &other, const Vector& rhs){
    Vector v = Vector();
    for (int i = 0; i < NDIM; i++) {
        v[i] = other[i] + rhs[i];
    }
    return v;
}

Vector operator-(const Vector &other, const Vector& rhs){
    Vector v = Vector();
    for (int i = 0; i < NDIM; i++) {
        v[i] = other[i] - rhs[i];
    }
    return v;
}

value operator*(const Vector &other, const Vector& rhs){
    value res = 0;
    for (int i = 0; i < NDIM; i++) {
        res += other[i] * rhs[i];
    }
    return res;
}

Vector operator*(const Vector &other, int value){
    Vector v = Vector();
    for (int i = 0; i < NDIM; i++) {
        v[i] = other[i] * value;
    }
    return v;
}

Vector operator*(int value, const Vector& rhs){
    Vector v = Vector();
    for (int i = 0; i < NDIM; i++) {
        v[i] = value * rhs[i];
    }
    return v;
}

std::ostream& operator<<(std::ostream& os, const Vector& rhs){
  return os << '{' << rhs[0] << ',' << rhs[1] << '}';
}
