#include <iostream>
#include <vector>

using namespace std;

vector<int> sortArray(vector<int>& nums) {
        
    for (short i = 0; i < nums.size(); i++) {

        for (short j = 0; j < nums.size() - i - 1; j++) {

            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }

    return nums;
}

int main() {

    vector<int> vnumbers = { 2, 4, 5, 3, 6 };
    vnumbers = sortArray(vnumbers);

    for (int& num : vnumbers)
        cout << num << ' ';

    return 0;
 }