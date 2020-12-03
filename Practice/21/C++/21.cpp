#include <string>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double weight, height, BMI;
    cin >> weight >> height;
    BMI = weight / pow(abs(height) / 100, 2);
    if (BMI < 18.5) {
        cout << "Underweight";
    }
    else if (18.5 <= BMI < 25.0) {
        cout << "Normal weight";
    }
    else if (25.0 <= BMI < 30.0) {
        cout << "Overweight";
    }
    else if (30.0 <= BMI) {
        cout << "Obesity";
    }
    return 0;

}