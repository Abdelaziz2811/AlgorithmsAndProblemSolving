#include <iostream>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    
    for (short i = 0; i < nums.size(); i++) {

        for (short j = 0; j < nums.size(); j++) {

            if (nums[i] == nums[j] && i != j)
                return true;
        }
    }
    return false;
}

int main() {

    cout << "Case 1 :" << endl;
    cout << containsDuplicate({1,2,3,1}) << endl;

    cout << "Case 2 :" << endl;
    cout << containsDuplicate({1,2,3,4}) << endl;

    cout << "Case 3 :" << endl;
    cout << containsDuplicate({1,1,1,3,3,4,3,2,4,2}) << endl;

    return 0;
}