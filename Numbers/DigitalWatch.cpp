#pragma warning(disable : 4996)
#include <iostream>
#include <string>

using namespace std;

tm* Time() {

    time_t t = time(0);
    tm* now = localtime(&t);

    return now;
}

int main() {

    while (true) {

        system("cls");

        tm* now = Time();
        cout << to_string(now->tm_hour) + ":" + to_string(now->tm_min) + ":" + to_string(now->tm_sec);

        if ((now->tm_hour == 0 || now->tm_hour == 12) && now->tm_min == 0 && now->tm_sec == 0)
            cout << "\a";

        _sleep(1000);
    }

    return 0;
}
