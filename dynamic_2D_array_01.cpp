#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    // making a 2D array using pointers (rows first)
    int** matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    // input elements in the array
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            cin >> matrix[r][c];
        }
    }

    // output the array in matrix form
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}
