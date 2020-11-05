// oop_practice.cpp: Nick Olivier
// Practice script for OOP

#include <iostream>
using namespace std;


/**
    Returns boolean value indicating whether one integer is divisible by another.
    @param numerator numerator in divisibility test.
    @param denomininator denomininator in divisibility test.
    @return bool indicating whether numerator is divisible by denominator.
*/
bool divisible_by(int numerator, int denominator) {
    int remainder;
    bool divisible;
    remainder = (numerator % denominator);
    if (remainder == 0){
        divisible = true;
    } else {
        divisible = false;
    }
    return divisible;
}


/**
    Prints "Buzz" if divisible by 5, "Fizz" if divisible by 3, 
    and "FizzBuzz" if divisible by 3 and 5 for a range of numbers.
    @param max_n Maximum number in range. Defaults to 100.
    @return 0.
*/
char fizzbuzz(int max_n = 100){
    for (int i = 1; i <= max_n; i = i + 1){
        if (divisible_by(i, 3) && divisible_by(i, 5)) {
        cout << "FizzBuzz" << endl;
        } else if (divisible_by(i, 3)){
            cout << "Fizz" << endl;
        } else if (divisible_by(i, 5)){
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}


int main() {
  cout << fizzbuzz(20);
}

















