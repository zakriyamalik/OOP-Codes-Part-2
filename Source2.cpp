//Part 1
//#include <iostream>
//
//template<typename T>
//class GrowableArray {
//private:
//    T* data;
//    int size;
//    int capacity;
//
//    void Resize(int newCapacity) {
//        T* newData = new T[newCapacity];
//        for (int i = 0; i < size; ++i) {
//            newData[i] = data[i];
//        }
//        capacity = newCapacity;
//        delete[] data;
//        data = newData;
//    }
//
//public:
//    GrowableArray() : data(nullptr), size(0), capacity(0) {}
//
//    GrowableArray(int s) : data(new T[s]), size(s), capacity(s) {}
//
//    void InsertAtEnd(T v) {
//        if (size == capacity) {
//            if (capacity == 0) {
//                capacity = 1;
//            }
//            else {
//                capacity *= 2;
//            }
//            Resize(capacity);
//        }
//        data[size++] = v;
//    }
//
//    T& operator[](int index) {
//        if (index < 0 || index >= size) {
//            throw std::out_of_range("Index out of range");
//        }
//        return data[index];
//    }
//
//    const T& operator[](int index) const {
//        if (index < 0 || index >= size) {
//            throw std::out_of_range("Index out of range");
//        }
//        return data[index];
//    }
//
//    ~GrowableArray() {
//        delete[] data;
//    }
//
//    void Print(const char* msg) const {
//        std::cout << msg << ": ";
//        for (int i = 0; i < size; ++i) {
//            std::cout << data[i] << " ";
//        }
//        std::cout << std::endl;
//    }
//};
// Part 2
//#include <iostream>
//
//template<typename T>
//class GrowableArray {
//private:
//    T* data;
//    int size;
//    int capacity;
//
//public:
//    GrowableArray() : data(nullptr), size(0), capacity(0) {}
//
//    GrowableArray(int s) : data(new T[s]), size(s), capacity(s) {}
//
//    void InsertAtEnd(T v) {
//        if (size == capacity) {
//            if (capacity == 0) {
//                capacity = 1;
//            }
//            else {
//                capacity *= 2;
//            }
//            T* newData = new T[capacity];
//            for (int i = 0; i < size; ++i) {
//                newData[i] = data[i];
//            }
//            delete[] data;
//            data = newData;
//        }
//        data[size++] = v;
//    }
//
//    T& operator[](int index) {
//        if (index < 0 || index >= size) {
//            std::cerr << "Index out of range" << std::endl;
//            exit(1);
//        }
//        return data[index];
//    }
//
//    const T& operator[](int index) const {
//        if (index < 0 || index >= size) {
//            std::cerr << "Index out of range" << std::endl;
//            exit(1);
//        }
//        return data[index];
//    }
//
//    ~GrowableArray() {
//        delete[] data;
//    }
//
//    void Print(const char* msg) const {
//        std::cout << msg << ": ";
//        for (int i = 0; i < size; ++i) {
//            std::cout << data[i] << " ";
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    GrowableArray<int> arr(3);
//    arr.InsertAtEnd(1);
//    arr.InsertAtEnd(2);
//    arr.InsertAtEnd(3);
//    arr.InsertAtEnd(4);
//    arr.InsertAtEnd(5);
//
//    arr.Print("Initial Array");
//
//    arr[1] = 5;
//    arr.Print("Array after setting arr[1] to 5");
//
//    return 0;
//}
