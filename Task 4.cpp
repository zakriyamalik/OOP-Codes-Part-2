//#include <iostream>
//#include <conio.h> // for getch()
//using namespace std;
//
//class Animal {
//public:
//    string message = "Animal speaks";
//    virtual string speak() { return message; }
//};
//
//class Dog : public Animal {
//public:
//    string message = "woof!";
//    string speak() override { return message; }
//};
//
//class Cat : public Animal {
//public:
//    string message = "mew!";
//    string speak() override { return message; }
//};
//
//int main() {
//    const int size = 5;
//    Animal* myPets[size];
//
//    int i = 0;
//    while (i < size) {
//        cout << "Press 1 for a Dog and 2 for a Cat." << endl;
//        switch (getch()) {
//        case '1':
//            myPets[i] = new Dog;
//            cout << "Dog added at position " << i << endl << endl;
//            i++;
//            break;
//        case '2':
//            myPets[i] = new Cat;
//            cout << "Cat added at position " << i << endl << endl;
//            i++;
//            break;
//        default:
//            cout << "Invalid input. Enter again." << endl << endl;
//            break;
//        }
//    }
//
//    for (int i = 0; i < size; i++) {
//        cout << "Pet at position " << i << ": " << myPets[i]->speak() << endl;
//        delete myPets[i];
//    }
//
//    return 0;
//}
