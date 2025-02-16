#include <iostream>
#include <vector>

using namespace std;

bool containsNearbyDuplicate(vector<int> nums, int k) {
        
    for (int i = 0; i < nums.size(); i++) {

        for (int j = 0; j < nums.size(); j++) {

            if ((nums[i] == nums[j] && i != j) && abs(i - j) <= k)
                return true;
        }
    }
    return false;
}

int main() {

    cout << "Case 1 : ";
    cout << containsNearbyDuplicate({1,2,3,1}, 3) << endl;

    cout << "Case 2 : ";
    cout << containsNearbyDuplicate({1,0,1,1}, 1) << endl;

    cout << "Case 3 : ";
    cout << containsNearbyDuplicate({1,2,3,1,2,3}, 2) << endl;

    return 0;
}