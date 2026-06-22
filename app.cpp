#include <iostream>
using namespace std;

int main() {
    cout << "\n------------------------\n";
    cout << "\n-- Calculate Your Age --\n";
    cout << "\n------------------------\n";

    int age;
    cout << "Inter Your Age : ";
    cin >> age;

    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;

    cout << "Age In Days :" << age_in_days <<"\n";
    cout << "Age In Hours :" << age_in_hours <<"\n";
    return 0;
}