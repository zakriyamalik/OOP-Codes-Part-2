//#include <iostream>
//
//using namespace std;
//
//class Engine {
//private:
//    bool status; // true if engine is running, false otherwise
//public:
//    Engine() : status(false) {} // engine is initially off
//    void displayStatus() {
//        if (status) {
//            cout << "Engine is running\n";
//        }
//        else {
//            cout << "Engine is off\n";
//        }
//    }
//    void setStatus(bool newStatus) {
//        status = newStatus;
//    }
//};
//
//class Car {
//private:
//    Engine engine;
//public:
//    void startEngine() {
//        engine.setStatus(true);
//        engine.displayStatus();
//    }
//};
//
//int main() {
//    Car myCar;
//    myCar.startEngine();
//    return 0;
//}
