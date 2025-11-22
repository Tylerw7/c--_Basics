// Arrays

#include <iostream>
#include <vector>

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


    // dynamic arrays: Vectors:

    // vector <int> test_scores;

    // test_scores.push_back(80);
    // test_scores.push_back(90);

    // cout << "Test Scores: \n";
    // for (int i = 0; i < test_scores.size(); ++i) {
    //     cout << test_scores.at(i) << endl;
    // };
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);

    vector <vector <int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << vector_2d.at(0).at(0) << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << vector_2d.at(1).at(1) << endl;



    return 0;
}