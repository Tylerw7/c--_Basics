#include <iostream>

using namespace std;

int main() {

    int selection {0};

    cout << "Selected number: " << endl;
    cin >> selection;

    switch (selection) {
        case 1: cout << "1 selected"; break;
        case 2: cout << "2 selected"; break;
        case 3:
        case 4: cout << "3 or 4 selected"; break;
        default: cout << "1,2,3,4 NOT selected"; break;
    }


}