#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main() {

    int room_width;
    int room_length;

    cout << "Enter the width of the room: ";
    cin >> room_width;
    cout << "Enter the length of the room: ";
    cin >> room_length;
    cout << "The area of the room is: " << room_length * room_width << endl;



    return 0;
}