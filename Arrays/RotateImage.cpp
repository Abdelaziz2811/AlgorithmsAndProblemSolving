#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotate(vector<vector<int>>& matrix) {
        
    vector<vector<int>> matrix1;

    for (short i = matrix.size() - 1; i >= 0; i--) {

        for (short j = 0; j < matrix.size(); j++) {

            matrix1[j][i] = matrix[i][j];
        }
    }

    return matrix1;
}

int main() {

    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    matrix = rotate(matrix);

    for (short i = 0; i < matrix.size(); i++) {

        for (short j = 0; j < matrix.size(); j++) {

            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}