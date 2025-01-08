#include <iostream>
#include <vector>

using namespace std;

    void setZeroes(vector<vector<int>>& matrix) {
        
        short row, clm;
        vector<vector<int>> matrix2 = matrix;

        int Clms = 0;

        for (int& number : matrix[0]) {

            Clms++;
        }

        for (short i = 0; i < matrix.size(); i++) {

            for (short j = 0; j < Clms; j++) {

                if (matrix[i][j] == 0) {

                    row = i;
                    clm = j;
                     // set row value to 0
                    for (short c = 0; c < matrix2.size(); c++) {

                        matrix2[row][c] = 0;
                    }
                    // set columns value to 0
                    for (short r = 0; r < matrix2.size(); r++) {

                        matrix2[r][clm] = 0;
                    }
                }
            }
        }
        
        matrix = matrix2;
    }

int main() {

    vector<vector<int>> matrix = { {1, 2, 3}, {4, 0, 6}, {7, 8, 9} };

    setZeroes(matrix);

    for (short i = 0; i < matrix.size(); i++) {

        for (short j = 0; j < matrix.size(); j++) {

            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}