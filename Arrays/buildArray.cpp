#include <iostream>
#include <vector>

using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector <int> output;
    for (int i = 0; i < nums.size(); i++) {
        output.push_back(nums[nums[i]]);
    }
    return output;
}

int main() {

    vector<int>& rs = buildArray({0,2,1,5,3,4});

    for (int& element : rs)
        cout << element << " ";
        
    return 0;
}