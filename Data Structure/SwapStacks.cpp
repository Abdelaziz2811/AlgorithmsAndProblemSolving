#include <iostream>
#include <stack>

using namespace std;

void FillStack1(stack <short>& stkNums) {

    for (short i = 1; i <= 10; i++) {

        stkNums.push(i);
    }
}

void FillStack2(stack <short>& stkNums) {

    for (short i = 1; i <= 10; i++) {

        stkNums.push(i * 2);
    }
}

stack <short> ReverseStack(stack <short>& stkNums) {

    stack <short> RevStack;

    while (!stkNums.empty()) {

        RevStack.push(stkNums.top());
        stkNums.pop();
    }
    return RevStack;
}

void SwapStack(stack <short>& stkNums1, stack <short>& stkNums2) {

    stack <short> Temp;

    while (!stkNums1.empty()) {

        Temp.push(stkNums1.top());
        stkNums1.pop();
    }

    while (!stkNums2.empty()) {

        stkNums1.push(stkNums2.top());
        stkNums2.pop();
    }

    stkNums1 = ReverseStack(stkNums1);

    while (!Temp.empty()) {

        stkNums2.push(Temp.top());
        Temp.pop();
    }
}

void PrintStackContent(stack <short> stkNums) {

    while (!stkNums.empty()) {

        cout << stkNums.top() << " ";
        stkNums.pop();
    }
    cout << endl;
}

int main() {

    stack <short> stkNums1;
    stack <short> stkNums2;

    FillStack1(stkNums1);
    FillStack2(stkNums2);

    cout << " Before swap : \n";
    cout << " Stack 1 : ";
    PrintStackContent(stkNums1);

    cout << " Stack 2 : ";
    PrintStackContent(stkNums2);

    // it does the work of swap functionality (stkNums1.swap(stkNums2)).
    SwapStack(stkNums1, stkNums2);

    cout << " After swap : \n";
    cout << " Stack 1 : ";
    PrintStackContent(stkNums1);

    cout << " Stack 2 : ";
    PrintStackContent(stkNums2);

    return 0;
}

