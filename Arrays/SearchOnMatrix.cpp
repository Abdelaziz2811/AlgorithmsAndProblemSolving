#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
    int Clm = 0;

    for (int Item : matrix[0]) {

        Clm++;
    }

    for (short i = 0; i < matrix.size(); i++) {

        for (short j = 0; j < Clm; j++) {

            if (matrix[i][j] == target)
                return true;
            if (matrix[i][j] > target)
                return false;
        }
    }
    return false;
}

int main () {

    cout << "Search on Matrix" << endl;

    cout <<"Test Number 1" << endl;

    vector<vector<int>> matrix = { {1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60} };

    cout << searchMatrix(matrix, 3) << endl;

    cout <<"Test Number 2" << endl;

    vector<vector<int>> matrix2 = { {1, 3, 5, 7}, {23, 30, 34, 60} };

    cout << searchMatrix(matrix2, 23) << endl;

    return 0;
}