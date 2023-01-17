#include <iostream>
#include <ostream>
#include <string>

using namespace std;


struct IntArray{
    int* storage; 
    int capacity;
    int count;

    IntArray(){
        count = 0;
        capacity = 1;
        storage = new int[capacity];
    }

    IntArray(const IntArray& other){
        count = other.count;
        capacity = other.capacity;
        storage = new int[capacity];
        for (int i = 0; i < count; i++){
            storage[i] = other.storage[i];
        }
    }

    void append(int value){
        storage[count] = value;
        count++;

       
        if (count == capacity){
            capacity *= 2;

            int* temp = new int[capacity];

            for (int i = 0; i < count; i++){
                temp[i] = storage[i];
            }

            int* old = storage;
            storage = temp;
            delete[] old;
        }
    }

    ~IntArray(){
        delete[] storage;
    }
};

IntArray operator+(const IntArray& left, const IntArray& right){
    IntArray result = left;
    for (int i=0;i < right.count;i++){
        result.append(right.storage[i]);
    }
    return result;
};


ostream& operator<<(ostream& os, const IntArray& arr){
    os << "[";
    for (int i = 0; i < arr.count; i++){
        os << arr.storage[i];
        if (i < arr.count - 1) os << ", ";
    }
    os << "]";
    return os;
}
