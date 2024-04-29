#ifndef BYTE_H
#define BYTE_H
#include "../require.h"
#include <iostream>

class Byte {
    unsigned char b;
public:
    Byte(unsigned char bb = 0) : b(bb) {}
    const Byte
        operator+(const Byte& right) const {
        return Byte(b + right.b);
    }
    const Byte
        operator-(const Byte& right) const {
        return Byte(b - right.b);
    }
    const Byte
        operator*(const Byte& right) const {
        return Byte(b * right.b);
    }
    const Byte
        operator/(const Byte& right) const {
        require(right.b != 0, "divide by zero");
        return Byte(b / right.b);
    }
    const Byte
        operator%(const Byte& right) const {
        require(right.b != 0, "modulo by zero");
        return Byte(b % right.b);
    }
    const Byte
        operator^(const Byte& right) const {
        return Byte(b ^ right.b);
    }
    const Byte
        operator&(const Byte& right) const {
        return Byte(b & right.b);
    }
    const Byte
        operator|(const Byte& right) const {
        return Byte(b | right.b);
    }
    const Byte
        operator<<(const Byte& right) const {
        return Byte(b << right.b);
    }
    const Byte
        operator>>(const Byte& right) const {
        return Byte(b >> right.b);
    }
    // operator= can only be a member function
    Byte& operator=(const Byte& right) {
        if (this == &right) return *this;
        b = right.b;
        return *this;
    }
    Byte& operator+=(const Byte& right) {
        if (this == &right) { /* self-assignment */ }
        b += right.b;
        return *this;
    }
    Byte& operator-=(const Byte& right) {
        if (this == &right) { /* self-assignment */ }
        b -= right.b;
        return *this;
    }
    Byte& operator*=(const Byte& right) {
        if (this == &right) { /* self-assignment */ }
        b *= right.b;
        return *this;
    }
    Byte& operator/=(const Byte& right) {
        require(right.b != 0, "divide by zero");
        if (this == &right) { /* self-assignment */ }
        b /= right.b;
        return *this;
    }
    Byte& operator%=(const Byte& right) {
        require(right.b != 0, "modulo by zero");
        if (this == &right) { /* self-assignment */ }
        b %= right.b;
        return *this;
    }
    Byte& operator^=(const Byte& right) {
        if (this == &right) { /* self-assignment */ }
        b ^= right.b;
        return *this;
    }
    Byte& operator&=(const Byte& right) {
        if (this == &right) { /* self-assignment */ }
        b &= right.b;
        return *this;
    }
    Byte& operator|=(const Byte& right) {
        if (this == &right) { /* self-assignment */ }
        b |= right.b;
        return *this;
    }
    Byte& operator>>=(const Byte& right) {
        if (this == &right) { /* self-assignment */ }
        b >>= right.b;
        return *this;
    }
    Byte& operator<<=(const Byte& right) {
        if (this == &right) { /* self-assignment */ }
        b <<= right.b;
        return *this;
    }
    int operator==(const Byte& right) const {
        return b == right.b;
    }
    int operator!=(const Byte& right) const {
        return b != right.b;
    }
    int operator<(const Byte& right) const {
        return b < right.b;
    }
    int operator>(const Byte& right) const {
        return b > right.b;
    }
    int operator<=(const Byte& right) const {
        return b <= right.b;
    }
    int operator>=(const Byte& right) const {
        return b >= right.b;
    }
    int operator&&(const Byte& right) const {
        return b && right.b;
    }
    int operator||(const Byte& right) const {
        return b || right.b;
    }
    void print(std::ostream& os) const {
        os << "0x" << std::hex << int(b) << std::dec;
    }
};

#endif