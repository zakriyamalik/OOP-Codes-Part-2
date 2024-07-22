//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Animal {
//public:
//    string message;
//    Animal() {
//        message = "speak() called.";
//    }
//    virtual string speak() {
//        return message;
//    }
//};
//
//class Dog : public Animal {
//public:
//    Dog() {
//        message = "woof!";
//    }
//    string speak() override {
//        return message;
//    }
//};
//
//int main() {
//    Animal objAnimal;
//    Dog objDog;
//    Animal* ptrAnimal = &objAnimal;
//    Dog* ptrDog = &objDog;
//    cout << objAnimal.speak() << endl; // Output: speak() called.
//    cout << objDog.speak() << endl; // Output: woof!
//    cout << ptrAnimal->speak() << endl; // Output: speak() called.
//    cout << ptrDog->speak() << endl; // Output: woof!
//    return 0;
//}
