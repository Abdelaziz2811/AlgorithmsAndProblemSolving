#include <iostream>
#include <vector>

using namespace std;

int findPeakElement(vector<int>& nums) {
    
    if (nums.size() == 1)
        return 0;

    for (short i = 0; i < nums.size(); i++) {
        
        if (i == 0 && nums[i] > nums[i + 1])
            return i;

        if (i != 0 && i != nums.size() - 1) {

            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
                return i;
        }

        if (i == nums.size() - 1 && nums[nums.size() - 1] > nums[i - 1])
            return i;
    }

    return -1;
}


int main() {

    cout << "Case 1 :" << endl;
    vector<int> nums1 = { 1,2,3,1 };
    cout << findPeakElement(nums1) << endl;

    cout << "Case 2 :" << endl;
    nums1 = { 1,2,1,3,5,6,4 };
    cout << findPeakElement(nums1) << endl;

    cout << "Case 3 :" << endl;
    nums1 = { 1,2,3,4,5,6,7,8,9,10 };
    cout << findPeakElement(nums1) << endl;

    return 0;
}