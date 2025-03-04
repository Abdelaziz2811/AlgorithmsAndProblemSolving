#include <iostream>
#include <vector>

using namespace std;

int minOperations(vector<int> nums, int k) {
    int Oper = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < k) Oper++;
    }
    return Oper;
}

int main() {

    cout << minOperations({2,11,10,1,3}, 10);

    return 0;
}