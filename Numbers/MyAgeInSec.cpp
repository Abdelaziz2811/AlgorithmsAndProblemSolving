#include <iostream>

using namespace std;

struct stDate{

    short Month;
    short Day;
    short Year;
};

bool IsLeapYear(short Year) {

    return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}

bool Date1EqualDate2(stDate Date1, stDate Date2) {

    return Date1.Day == Date2.Day && Date1.Month == Date2.Month && Date1.Year == Date2.Year;
}

short NumberOfDaysInMonth(stDate Date) {

    return IsLeapYear(Date.Year) ? (Date.Month == 2) ? 29 : 28 : (Date.Month == 4 || Date.Month == 6 || Date.Month == 9 || Date.Month == 11) ? 30 : 31; 
}

bool IsLastDayInMonth(stDate Date) {

    return Date.Day == NumberOfDaysInMonth(Date);
}

bool IsLastMonthInYear(stDate Date) {

    return Date.Month == 12;
}

stDate IncreaseDateByOneDay(stDate Date){

    if (IsLastDayInMonth(Date)) {

        Date.Day = 1;
        if (IsLastMonthInYear(Date)) {

            Date.Month = 1;
            Date.Year++;
        }
        else {

            Date.Month++;
        }
    }
    else {

        Date.Day++;
    }
    return Date;
}

int GetDiffDays(stDate Date1, stDate Date2){

    int DiffDays = 0;

    while (!Date1EqualDate2(Date1, Date2)) {

        Date1 = IncreaseDateByOneDay(Date1);
        DiffDays++;
    }
    return DiffDays;
}

int GetAgeInSec(stDate Date1, stDate Date2) {

    return GetDiffDays(Date1, Date2) * 24 * 60 * 60;
}

int main() {

    stDate MyBirthDay;

    MyBirthDay.Day = 28;
    MyBirthDay.Month = 11;
    MyBirthDay.Year = 2005;

    stDate TodaysDate;

    TodaysDate.Day = 17;
    TodaysDate.Month = 12;
    TodaysDate.Year = 2024; // intialize today's date manualy or use date lib to get localtime

    cout << "\nYour Age In Seconds : " << GetAgeInSec(MyBirthDay, TodaysDate);

    //cout << "\n" << (((Number of your Age in Sec / 60) / 60) / 24); --> //this number you will have is number of
                                                                          //days so divide it on 365 to make sure code is working
    //cout << "\n" << 6859 / 365;


    return 0;
}