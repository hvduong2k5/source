#include <stdexcept>

template <typename T>
MyVector<T>::MyVector() : data(nullptr), capacity(0), length(0) {}

template <typename T>
MyVector<T>::~MyVector() {
    delete[] data;
}

template <typename T>
void MyVector<T>::resize(size_t newCapacity) {
    T* newData = new T[newCapacity];
    for (size_t i = 0; i < length; ++i) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    capacity = newCapacity;
}

template <typename T>
void MyVector<T>::push_back(const T& value) {
    if (length == capacity) {
        resize(capacity == 0 ? 1 : capacity * 2);
    }
    data[length++] = value;
}

template <typename T>
T& MyVector<T>::operator[](size_t index) {
    if (index >= length) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template <typename T>
const T& MyVector<T>::operator[](size_t index) const {
    if (index >= length) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template <typename T>
size_t MyVector<T>::size() const {
    return length;
}

template <typename T>
bool MyVector<T>::empty() const {
    return length == 0;
}

template <typename T>
void MyVector<T>::clear() {
    delete[] data;
    data = nullptr;
    capacity = 0;
    length = 0;
}
