#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
        
    int duplicate = nums[nums.size() - 1];
    for (short i = nums.size() - 2; i >= 0; i--) {
        
        if (duplicate == nums[i]) {
            
            nums.erase(nums.begin() + i);
        }
        else 
            duplicate = nums[i];
    }

    return nums.size();
}

int main() {

    vector<int> vNums = {0,0,1,1,1,2,2,3,3,4};

    int Size = removeDuplicates(vNums);

    cout << "Size after remove duplicates : " << Size << endl;

    cout << "Array elements after remove duplicates : ";
    for (int &Num : vNums) {

        cout << Num << ' ';
    }

    return 0;
}