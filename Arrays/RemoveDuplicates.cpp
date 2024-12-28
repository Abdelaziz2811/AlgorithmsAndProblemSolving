#include <iostream>
#include <vector>

using namespace std;

    bool IsNumberExist(vector<int>& nums0, int Number) {

        for (short i = 0; i < nums0.size(); i++) {

            if (nums0[i] == Number)
                return true;
        }
        return false;
    }

    vector<int> removeDuplicates(vector<int>& nums) {
        
        vector<int> nums0;

        for (short i = 0; i < nums.size(); i++) {

            if (!IsNumberExist(nums0, nums[i])) {

                nums0.push_back(nums[i]);
            }
        }
        return nums0;
    }

    int main() {

        vector<int> vNums = {0,0,1,1,1,2,2,3,3,4};

        vector<int> vResult = removeDuplicates(vNums);

        cout << "Numbers after removing duplicates: ";

        for (int & N : vResult) {

            cout << N << " ";
        }

        return 0;
    }