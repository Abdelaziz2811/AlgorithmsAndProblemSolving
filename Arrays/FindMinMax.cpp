#include <iostream>
#include <vector>

using namespace std;

int FindMin(vector<int>& nums) {

    int Min = nums[0];
    for (short i = 1; i < nums.size(); i++) {

        if (Min > nums[i])
            Min = nums[i];
    }
    return Min;
}

int FindMax(vector<int>& nums) {

    int Max = nums[0];
    for (short i = 1; i < nums.size(); i++) {

        if (Max < nums[i])
            Max = nums[i];
    }
    return Max;
}

int main() {
    
    cout << "Case 1 :" << endl;
    cout << FindMin({3,4,5,1,2}) << endl;

    cout << "Case 2 :" << endl;
    cout << FindMin({4,5,6,7,0,1,2}) << endl;

    cout << "Case 3 :" << endl;
    cout << FindMin({11,13,15,17}) << endl;

    cout << "Case 1 :" << endl;
    cout << FindMax({3,4,5,1,2}) << endl;

    cout << "Case 2 :" << endl;
    cout << FindMax({4,5,6,7,0,1,2}) << endl;

    cout << "Case 3 :" << endl;
    cout << FindMax({11,13,15,17}) << endl;

    return 0;
}