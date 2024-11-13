#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <stdexcept>

template <typename T>
class MyVector {
private:
    T* data;               
    size_t capacity;       
    size_t length;         

    void resize(size_t newCapacity) {
        T* newData = new T[newCapacity];
        for (size_t i = 0; i < length; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

public:
    MyVector() : data(NULL), capacity(0), length(0) {}

    ~MyVector() {
        delete[] data;
    }

    void push_back(const T& value) {
        if (length == capacity) {
            resize(capacity == 0 ? 1 : capacity * 2);
        }
        data[length++] = value;
    }

    T& operator[](size_t index) {
        if (index >= length) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    const T& operator[](size_t index) const {
        if (index >= length) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    size_t size() const {
        return length;
    }

    bool empty() const {
        return length == 0;
    }

    size_t getCapacity() const {
        return capacity;
    }

    void clear() {
        delete[] data;
        data = NULL;
        capacity = 0;
        length = 0;
    }
};

#endif // MYVECTOR_H
