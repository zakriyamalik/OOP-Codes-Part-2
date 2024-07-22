//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//class RationalNumber {
//private:
//    int numerator, denominator;
//
//public:
//    // Constructor
//    RationalNumber(int num = 1, int den = 1) {
//        if (den == 0) {
//            cout << "Error: Denominator cannot be 0. Setting denominator to 1." << endl;
//            den = 1;
//        }
//
//        if (den < 0) {
//            num *= -1;
//            den *= -1;
//        }
//
//        numerator = num;
//        denominator = den;
//
//        reduce();
//    }
//
//    // Overloaded >> operator
//    friend istream& operator>>(istream& in, RationalNumber& rn) {
//        int num, den;
//        in >> num >> den;
//
//        if (den == 0) {
//            cout << "Error: Denominator cannot be 0. Setting denominator to 1." << endl;
//            den = 1;
//        }
//
//        if (den < 0) {
//            num *= -1;
//            den *= -1;
//        }
//
//        rn.numerator = num;
//        rn.denominator = den;
//
//        rn.reduce();
//
//        return in;
//    }
//
//    // Overloaded << operator
//    friend ostream& operator<<(ostream& out, const RationalNumber& rn) {
//        out << rn.numerator << "/" << rn.denominator;
//        return out;
//    }
//
//    // Overloaded + operator
//    RationalNumber operator+(const RationalNumber& rn) const {
//        int num = numerator * rn.denominator + denominator * rn.numerator;
//        int den = denominator * rn.denominator;
//
//        return RationalNumber(num, den);
//    }
//
//    // Overloaded - operator
//    RationalNumber operator-(const RationalNumber& rn) const {
//        int num = numerator * rn.denominator - denominator * rn.numerator;
//        int den = denominator * rn.denominator;
//
//        return RationalNumber(num, den);
//    }
//
//    // Overloaded == operator
//    bool operator==(const RationalNumber& rn) const {
//        return (numerator == rn.numerator && denominator == rn.denominator);
//    }
//
//    // Overloaded ++ prefix operator
//    RationalNumber operator++() {
//        numerator += denominator;
//        reduce();
//        return *this;
//    }
//
//    // Overloaded -- postfix operator
//    RationalNumber operator--(int) {
//        RationalNumber temp(numerator, denominator);
//        numerator -= denominator;
//        reduce();
//        return temp;
//    }
//    int gcdf(int a, int b) {
//        while (b != 0) {
//            int temp = b;
//            b = a % b;
//            a = temp;
//        }
//        return a;
//    }
//
//private:
//    // Function to reduce the fraction to its simplest form
//    void reduce() {
//        int gcd = gcdf(numerator, denominator);
//        gcd;
//        numerator /= gcd;
//        denominator /= gcd;
//    }
//};
//int main() {
//    // Create a RationalNumber object using two-argument constructor
//    RationalNumber rn1(3, 6);
//    cout << "rn1 = " << rn1 << endl;
//
//    // Create a RationalNumber object using default constructor
//    RationalNumber rn2;
//    cout << "rn2 = " << rn2 << endl;
//
//    // Use overloaded >> operator to input values for rn2
//    cout << "Enter numerator and denominator for rn2: ";
//    cin >> rn2;
//    cout << "rn2 = " << rn2 << endl;
//
//    // Use overloaded + operator to add rn1 and rn2
//    RationalNumber sum = rn1 + rn2;
//    cout << "rn1 + rn2 = " << sum << endl;
//
//    // Use overloaded - operator to subtract rn2 from rn1
//    RationalNumber diff = rn1 - rn2;
//    cout << "rn1 - rn2 = " << diff << endl;
//
//    // Use overloaded == operator to compare rn1 and rn2
//    bool equal = (rn1 == rn2);
//    cout << "rn1 == rn2: " << equal << endl;
//
//    // Use overloaded prefix ++ operator to increment rn2
//    ++rn2;
//    cout << "rn2 after ++rn2: " << rn2 << endl;
//
//    // Use overloaded postfix -- operator to decrement rn2
//    rn2--;
//    cout << "rn2 after rn2--: " << rn2 << endl;
//
//    return 0;
//}