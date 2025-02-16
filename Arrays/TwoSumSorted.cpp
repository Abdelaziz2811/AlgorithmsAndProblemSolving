#include <iostream>
#include <vector>

using namespace std;

vector<int> TwoSum(vector<int> numbers, int target) {
        
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

    cout << "Test :"<< endl;
    vector <int> vTwoNumbersPos;
    vTwoNumbersPos = TwoSum({2,7,11,15}, 9);

    for (int & Pos : vTwoNumbersPos)
        cout << Pos << ' ';
        
    return 0;
}