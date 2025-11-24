#include <iostream>

using namespace std;


int main() {

    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter 3 integers";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;
    double average = {0.0};

    average = static_cast<double>(total) / count;

    cout << "Total: " << total << "average: " << average;

    return 0;
}