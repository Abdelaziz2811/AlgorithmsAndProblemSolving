#include <iostream>
#include <string>
#include <vector>

using namespace std;

int GetMaxNegative(vector<int>& nums, int MaxNegative) {
    for (int& element : nums) {
        if (element < 0) {
            if (element > MaxNegative)
                MaxNegative = element;
        }
    }
    return MaxNegative;
}

int maxSubArray(vector<int> nums) {
    if (nums.empty()) return 0;
    int MaxNegative;
    for (auto i = nums.begin(); i != nums.end(); i++) {
        for (auto element = nums.begin(); element != nums.end(); element++) {
            if (nums[i] == nums[element])
                nums.erase(element);
        }
        if (*i < 0) MaxNegative = *i;
    }

    MaxNegative = GetMaxNegative(nums, MaxNegative);
    int rs = 0;
    for (int& element : nums) {
        rs += element;
    }

    rs += MaxNegative;

    return rs;
}

int main() {

   cout << maxSubArray({-2,1,-3,4,-1,2,1,-5,4});

    return 0;
}