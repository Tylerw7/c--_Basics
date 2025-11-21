// Arrays

#include <iostream>

using namespace std;

int main() {

    // char vowels [] {'a','e', 'i', 'o', 'u'};
    // cout << "\nThe first vowel is: " << vowels[0] << endl;
    // cout << "\nThe last vowel is: " << vowels[4] << endl;

    // int grades [5];

    // cout << "Enter the first 5 grades: ";
    // cin >> grades[0]; 
    // cin >> grades[1];
    // cin >> grades[2];
    // cin >> grades[3];
    // cin >> grades[4];

    // cout << "Grades:" << endl;
    // cout << grades[0] << endl;
    // cout << grades[1] << endl;
    // cout << grades[2] << endl;
    // cout << grades[3] << endl;
    // cout << grades[4] << endl;

    //multi-dimensional

    const int rows {3};
    const int cols {4};

    int movie_rating [rows][cols] = {
        {5,4,3,6},
        {8,4,5,2},
        {1,2,7,9},
    };

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << movie_rating[i][j] << " ";
        }
        cout << endl;
    }
    



    return 0;
}