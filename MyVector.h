#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <stdexcept>

template <typename T>
class MyVector {
private:
    T* data;
    size_t capacity;
    size_t length;

    void resize(size_t newCapacity);

public:
    MyVector();
    ~MyVector();

    void push_back(const T& value);
    T& operator[](size_t index);
    const T& operator[](size_t index) const;

    size_t size() const;
    bool empty() const;
    void clear();
};

#include "MyVector.tpp"

#endif // MYVECTOR_H
