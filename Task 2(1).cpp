#include <iostream>
using namespace std;
class Set {
private:
    int* data;        // pointer to an array of type integers which will be treated as set
    int capacity;     // maximum possible number of elements that can be stored in the Set
    int noOfElements; // number of elements in the Set
    static int count; // keep the count of objects of the class created in the main function

public:
    Set(int cap = 10);
    Set(const Set& ref);
    void reSize(int newcapacity);
    static int getObjCount();
    ~Set();
    int getSize() {
        return noOfElements;
    }

    bool insert(int val) {
        // check if the set is full
        if (noOfElements == capacity) {
            cout << "Set is full. Cannot insert more elements.\n";
            return false;
        }
        // check if the value already exists in the set
        for (int i = 0; i < noOfElements; i++) {
            if (data[i] == val) {
                cout << "Element already exists in the set.\n";
                return false;
            }
        }
        // insert the value into the set
        data[noOfElements] = val;
        noOfElements++;
        return true;
    }
    //int getSize();
   // bool insert(int val);
    //int operator[](int index);
    Set operator+(int n) {
        Set temp(capacity);

        for (int i = 0; i < noOfElements; i++) {
            temp.data[i] = data[i] + n;
        }

        temp.noOfElements = noOfElements;

        return temp;
    }

    Set& operator++() {
        for (int i = 0; i < noOfElements; i++) {
            data[i]++;
        }

        return *this;
    }

    Set operator++(int) {
        Set temp(*this);

        operator++();

        return temp;
    }

    Set&operator--() {
        for (int i = 0; i < noOfElements; i++) {
            data[i]--;
        }

        return *this;
    }

    Set operator--(int) {
        Set temp(*this);

        operator--();

        return temp;
    }
    int& operator[](int index) {
    if (index >= 0 && index < noOfElements) {
        return data[index];
    }
    else {
        cout << "Index out of bounds.\n";
        // return a dummy variable
        static int dummy;
        return dummy;
    }
}

};


int Set::count = 0;

Set::Set(int cap) {
    if (cap < 0) {
        cout << "Invalid capacity entered. Setting capacity to default 0.\n";
        capacity = 0;
    }
    else {
        capacity = cap;
    }

    noOfElements = 0;
    data = new int[capacity];

    count++;
}

Set::Set(const Set& ref) {
    capacity = ref.capacity;
    noOfElements = ref.noOfElements;

    data = new int[capacity];

    for (int i = 0; i < noOfElements; i++) {
        data[i] = ref.data[i];
    }

    count++;
}

Set::~Set() {
    delete[] data;
    count--;
}

void Set::reSize(int newcapacity) {
    int* newData = new int[newcapacity];

    int copyLength = newcapacity < noOfElements ? newcapacity : noOfElements;

    for (int i = 0; i < copyLength; i++) {
        newData[i] = data[i];
    }

    delete[] data;
    data = newData;
    capacity = newcapacity;
}

int Set::getObjCount() {
    return count;
}
//int Set::getSize() {
//    return noOfElements;
//}

//bool Set::insert(int val) {
//    // check if the set is full
//    if (noOfElements == capacity) {
//        cout << "Set is full. Cannot insert more elements.\n";
//        return false;
//    }
//    // check if the value already exists in the set
//    for (int i = 0; i < noOfElements; i++) {
//        if (data[i] == val) {
//            cout << "Element already exists in the set.\n";
//            return false;
//        }
//    }
//    // insert the value into the set
//    data[noOfElements] = val;
//    noOfElements++;
//    return true;
//}


int main() {
    // Initialize object with default capacity of 0
    Set obj1;

    // Get user input for number of elements to insert
    int num;
    cout << "Enter the number of elements to insert: ";
    cin >> num;

    // Insert elements into obj1
    for (int i = 0; i < num; i++) {
        int element;
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        obj1.insert(element);
    }

    // Print elements of obj1
    cout << "Elements in obj1: ";
    for (int i = 0; i < obj1.getSize(); i++) {
        cout << obj1[i] << " ";
    }
    cout << endl;

    // Use overloaded + operator to create a new Set object with all elements incremented by n
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    Set obj2 = obj1 + n;

    // Print elements of obj2
    cout << "Elements in obj2 after incrementing all elements by " << n << ": ";
    for (int i = 0; i < obj2.getSize(); i++) {
        cout << obj2[i] << " ";
    }
    cout << endl;

    // Use overloaded ++ operator to increment all elements of obj1
    obj1++;

    // Print elements of obj1
    cout << "Elements in obj1 after incrementing all elements by 1: ";
    for (int i = 0; i < obj1.getSize(); i++) {
        cout << obj1[i] << " ";
    }
    cout << endl;

    // Use overloaded -- operator to decrement all elements of obj1
    obj1--;

    // Print elements of obj1
    cout << "Elements in obj1 after decrementing all elements by 1: ";
    for (int i = 0; i < obj1.getSize(); i++) {
        cout << obj1[i] << " ";
    }
    cout << endl;

    return 0;
}
