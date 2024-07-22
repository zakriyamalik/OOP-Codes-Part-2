//#include <iostream>
//namespace my_namespace {
//    class TemperatureTooLow {
//    public:
//        const char* what() const {
//            return "Temperature is below absolute zero (-273.15°C).";
//        }
//    };
//
//    class TemperatureConverter {
//    private:
//        double celsius;
//        double fahrenheit;
//    public:
//        TemperatureConverter(double c) : celsius(c), fahrenheit(0.0) {
//            if (celsius < -273.15) {
//                throw TemperatureTooLow();
//            }
//        }
//
//        double getCelsius() {
//            return celsius;
//        }
//
//        double getFahrenheit() {
//            if (fahrenheit == 0.0) {
//                fahrenheit = celsius * 1.8 + 32.0;
//            }
//            return fahrenheit;
//        }
//    };
//}
//
//int main() {
//    double c;
//    std::cout << "Enter a temperature in Celsius:\n";
//    std::cin >> c;
//    try {
//        my_namespace::TemperatureConverter tc(c);
//        std::cout << "The temperature in Celsius is " << tc.getCelsius() << "°C.\n";
//        std::cout << "The temperature in Fahrenheit is ";
//        // calculate Fahrenheit using loop instead of built-in formula
//        for (int i = 0; i < 32; ++i) {
//            tc.getFahrenheit();
//        }
//        std::cout << tc.getFahrenheit() << "°F.\n";
//    }
//    catch (my_namespace::TemperatureTooLow& e) {
//        std::cout << e.what() << "\n";
//    }
//    return 0;
//}
