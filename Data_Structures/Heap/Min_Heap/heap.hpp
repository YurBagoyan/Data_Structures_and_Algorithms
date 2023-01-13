#ifndef HEAP_HPP
#define HEAP_HPP

int inputSize();
void randInput(int* arr, const int size);
void print(int* arr, const int size);

template <typename T>
void swap(T& a, T& b);
inline int parent(const int i);
inline int left(const int i);
inline int right(const int i);

constexpr int MAXSIZE = 100;

//template <typename T>
//void sort(MaxHeap<T> heap);

template <typename T>
class MaxHeap
{
public:
    /// Establish invariant
    MaxHeap(T* arr, int size);
    ~MaxHeap();

    /// Maintain invariant
    void insert(T value);
    T extarct();
    void print() const;

private:
    T* arr_;
    int size_;
    int capacity_;

    void copy(T* array, const int arrSize);
    void build();
    void heapify(const int i);
    void heapify_upwards(const int i);
    void newArr();
};

#include "heap.impl.hpp"

#endif // HEAP_HPP
