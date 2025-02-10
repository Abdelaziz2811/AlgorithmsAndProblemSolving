#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
        
    for (int i = nums.size() - 1; i >= 0; i--) {  
        
        if (nums[i] == val) {
            nums.erase(nums.begin() + i);
        }
    }
    
    return nums.size();
}

int main() {

    cout << "Case 1 : " << endl;
    cout << removeElement({1,0,3,2,2,0,3}, 2);

    cout << "Case 2 : " << endl;
    cout << removeElement({1,0,3,3,2,0,3}, 3);

    cout << "Case 3 : " << endl;
    cout << removeElement({1,0,5,0,2,0,3}, 0);

    return 0;
}