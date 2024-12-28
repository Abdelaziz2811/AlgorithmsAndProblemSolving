#include <iostream>
#include <vector>

using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
        
    short FirstPosition = -1;
    short LastPosition = -1;

    vector<int> vNums;

    if (nums.empty()) {

        vNums.push_back(FirstPosition);
        vNums.push_back(LastPosition);

        return vNums;
    }

    for (short i = 0; i < nums.size(); i++) {

        if (nums[i] == target) {

            if (FirstPosition == -1) {

                FirstPosition = i;
            }
            LastPosition = i;
        }
    }

    vNums.push_back(FirstPosition);
    vNums.push_back(LastPosition);

    return vNums;
}

int main() {

    vector<int> vNums = {5, 7, 7, 8, 8, 10};

    vector<int> vResult = searchRange(vNums, 8);

    for (int & N : vResult) {

        cout << N << " ";
    }

    return 0;
}