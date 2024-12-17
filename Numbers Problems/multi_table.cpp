#include <iostream>
#include <string>

using namespace std;

void multi_table(int number)
{
    for (short i = 1; i <= 10; i++){
      
       cout << i << " * " << number <<" = "<< i * number << "\n";
    }
}

int main() {

    multi_table(4);

    return 0;
}