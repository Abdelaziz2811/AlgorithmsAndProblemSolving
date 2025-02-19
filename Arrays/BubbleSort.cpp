#include <iostream>
#include <vector>

using namespace std;

void Swap(vector<int>& nums, int i, int j) {

    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

vector<int> SortArray(vector<int>& nums) {
        
    for (short i = 0; i < nums.size(); i++) {

        for (short j = 0; j < nums.size() - i; j++) {

            if (nums[j] > nums[j + 1])
                Swap(nums, nums[j], nums[j + 1]);
        }
    }

    return nums;
}

int main() {

    vector<int> vnumbers = { 10, 9, 34, 8, 2, 4, 5, 3, 6 };
    
    vnumbers = SortArray(vnumbers);

    for (int& num : vnumbers)
        cout << num << ' ';

    return 0;
 }