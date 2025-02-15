#include <iostream>
#include <vector>

using namespace std;

vector<int> TwoSum(vector<int>& numbers, int target) {
        
    if (numbers.empty()) return {0, 0};

    int left = 0;
    int right = numbers.size() - 1;
    int sum;
    
    while (left < right) {

        sum = numbers[left] + numbers[right];

        if (sum == target)
            return {left + 1, right + 1};
        if (sum > target) 
            right--;
        else 
            left++;
    }

    return {0, 0};
}

int main() {

    cout << "Case 1 :"<< endl;
    TwoSum()

    return 0;
}