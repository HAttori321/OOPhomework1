#include <iostream>
using namespace std;


class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator = 0, int denominator = 1) : numerator(numerator), denominator(denominator) {}

    Fraction operator+(const Fraction& other) const {
        return Fraction(numerator * other.denominator + denominator * other.numerator,
            denominator * other.denominator);
    }
    Fraction operator-(const Fraction& other) const {
        return Fraction(numerator * other.denominator - denominator * other.numerator,
            denominator * other.denominator);
    }
    Fraction operator*(const Fraction& other) const {
        return Fraction(numerator * other.numerator, denominator * other.denominator);
    }
    Fraction operator/(const Fraction& other) const {
        return Fraction(numerator * other.denominator, denominator * other.numerator);
    }

    void Print() const {
        cout << numerator << "/" << denominator << std::endl;
    }
};


int main() {
    Fraction f1(1, 7), f2(3, 10);
    cout << "First fraction : ";
    f1.Print();
    cout << "Second Fraction : ";
    f2.Print();
    cout << "Sum : ";
    (f1 + f2).Print();
    cout << "difference : ";
    (f1 - f2).Print();
    cout << "Product : ";
    (f1 * f2).Print();
    cout << "Fraction : ";
    (f1 / f2).Print();
}