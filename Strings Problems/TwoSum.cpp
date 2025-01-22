#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    int sum;

    for (short i = 0; i < nums.size(); i++) {

        for (short j = 0; j < nums.size(); j++) {

            sum = nums[i] + nums[j];
            
            if (sum == target && i != j) 
                return { i, j };
        }
    }

    return { 0, 0 };
}

int main() {

    vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}