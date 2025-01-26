#include <iostream>
#include <vector>

using namespace std;

bool IsNonDuplicate(vector<int>& nums,int index) {

    for (int i = 0; i < nums.size(); i++) {

        if (nums[index] == nums[i] && i != index)
            return false;
    }

    return true;
}

int singleNonDuplicate(vector<int>& nums) {
    
    for (int i = 0; i < nums.size(); i++) {

        if (IsNonDuplicate(nums, i))
            return nums[i];
    }

    return 0;
}

int main() {

    cout << "Case 1 :" << endl;
    vector<int> nums1 = { 1,1,2,3,3,4,4,8,8 };
    cout << singleNonDuplicate(nums1) << endl;

    cout << "Case 2 :" << endl;
    vector<int> nums2 = { 3,3,7,7,10,11,11 };
    cout << singleNonDuplicate(nums2) << endl;

    cout << "Case 3 :" << endl;
    vector<int> nums3 = { 1,1,2,2,3 };
    cout << singleNonDuplicate(nums3) << endl;

    return 0;
}