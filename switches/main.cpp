#include <iostream>

using namespace std;

int main() {

    int selection {0};

    cout << "Selected number: " << endl;
    cin >> selection;

    switch (selection) {
        case '1': cout << '1 selected';
        case '2': cout << '2 selected';
        case '3':
        case '4': cout << "3 or 4 selected";
        default: cout << '1,2,3,4 NOT selected';
    }


}