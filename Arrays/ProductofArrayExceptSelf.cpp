#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> left(nums.size(), 1);
    vector<int> right(nums.size(), 1);
    vector<int> output(nums.size());
    
    for(int i = 1; i < nums.size(); i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }

    for(int i = nums.size() - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }
    
    for (int i = 0; i < nums.size(); i++) {
        output[i] = left[i] * right[i];
    }

    return output;
}

int main() {

    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    for(int& i : result) {
        cout << i << " ";
    }

    return 0;
}