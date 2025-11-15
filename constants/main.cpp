#include <iostream>

using namespace std;

int main() {

    const double price_per_room {30};
    const double sales_tax {0.06};

    cout << "Welcome to Franks carpet cleaning service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";

    int number_rooms {0};
    cin >> number_rooms;

    cout << "\nEstimate for carpet cleaning service: " << endl;
    cout << "Number of rooms " << number_rooms;
    cout << "\nPrice per room $30" << endl;
    cout << "Cost: $" << price_per_room * number_rooms << endl;
    cout << "Tax: " << price_per_room * number_rooms * sales_tax << endl;
    cout << "================================" << endl;

    cout << "\nTotal Cost: $" << (price_per_room*number_rooms*sales_tax) + (price_per_room*number_rooms) << endl;

    return 0;
}