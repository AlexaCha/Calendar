/* This program asks the user to type the week day that represents the first day of the year and the yeaar. it prints out the calendar for that year. It also calculates if the year chosen by the user is the leap year. The program is written in C++
*/

#include <iostream>
using namespace std;

int printMonthCalendar(int numOfDays, int startingDay);
bool leapYear (int year);
void printYearCalender(int year, int startingDay);

int main() {
    int numOfDays, startingDay, lastDay;
    int year;
    
    /*cout << "Part A\n";
    cout << "Enter the number of days in the month\n";
    cin >> numOfDays; */
    cout << "Enter a number 1-7 that represents the first day of the year\n";
    cout << "(1 for Monday, 2 for Tuesday, 3 for Wednesday, etc.)\n";
    cin >> startingDay;
    /*
    lastDay = printMonthCalendar (numOfDays, startingDay);
    cout << "The last day of the month is "<< lastDay << endl;
    
    cout << endl;
    cout <<"Part B\n"; */
    cout << "Enter the year: \n";
    cin >> year;
    
    /*if (leapYear(year) == 1) {
        cout << "The " << year << " is a leap year." << endl;
    }
    else {
        cout << "The " << year << " is not a leap year." << endl;
    }
    cout << endl;
    cout << "Part C\n";
    cout << endl; */
    printYearCalender(year, startingDay);
    
}

int printMonthCalendar(int numOfDays, int startingDay){
    int last_day;
    last_day = 0;
    cout << "Mon  Tue  Wed  Thu  Fri  Sat  Sun\n";
    
    for (int j = 1; j < startingDay; j++)
        cout << "     ";
    
    for (int i = 1; i <= 8 - startingDay; i++) {
        cout << i;
        cout << "    ";
}
    cout << endl;
    
    for (int i = 9 - startingDay; i <= numOfDays; i++) {
        if (i < 10) {
            cout << i;
            cout << "    ";
        }
        else {
            cout << i;
            cout << "   ";
        }
        last_day ++;
        if (last_day == 7) {
            cout << endl;
            last_day = 0;
        }
    }
    cout << endl;
    return last_day;
}

bool leapYear (int year) {
    
    if ((year % 4 == 0) && (year % 100 != 0)) {
        return true;
    }
    else if ((year % 100 == 0) && (year % 400 == 0)){
        return true;
            }
    else {
        return false;
            }
}

void printYearCalender(int year, int startingDay) {
    int last_day;
    
    cout << "January " << year << endl;
    last_day = printMonthCalendar(31, startingDay);
    if (last_day == 7) {
        last_day = 1;
    }
    else {
        last_day += 1;
    }
    cout << endl;
    
    cout << "February " << year << endl;
    if (leapYear(year) == 1) {
        last_day = printMonthCalendar(29, last_day);
        if (last_day == 7) {
            last_day = 1;
        }
        else {
            last_day += 1;
        }
    }
    else {
        last_day = printMonthCalendar(28, last_day);
        if (last_day == 7) {
            last_day = 1;
        }
        else {
            last_day += 1;
        }
    }
    cout << endl;
    cout << "March " << year << endl;
    last_day = printMonthCalendar(31, last_day);
    if (last_day == 7) {
        last_day = 1;
    }
    else {
        last_day += 1;
    }
    
    cout << endl;
    cout << "April " << year << endl;
    last_day = printMonthCalendar(30, last_day);
    if (last_day == 7) {
        last_day = 1;
    }
    else {
        last_day += 1;
    }
    
    cout << endl;
    cout << "May " << year << endl;
    last_day = printMonthCalendar(31, last_day);
    if (last_day == 7) {
        last_day = 1;
    }
    else {
        last_day += 1;
    }
    
    cout << endl;
    cout << "June " << year << endl;
    last_day = printMonthCalendar(30, last_day);
    if (last_day == 7) {
        last_day = 1;
    }
    else {
        last_day += 1;
    }
    
    cout << endl;
    cout << "July " << year << endl;
    last_day = printMonthCalendar(31, last_day);
    if (last_day == 7) {
        last_day = 1;
    }
    else {
        last_day += 1;
    }
    
    cout << endl;
    cout << "August " << year << endl;
    last_day = printMonthCalendar(31, last_day);
    if (last_day == 7) {
        last_day = 1;
    }
    else {
        last_day += 1;
    }
    
    cout << endl;
    cout << "September " << year << endl;
    last_day = printMonthCalendar(30, last_day);
    if (last_day == 7) {
        last_day = 1;
    }
    else {
        last_day += 1;
    }
    
    cout << endl;
    cout << "October " << year << endl;
    last_day = printMonthCalendar(31, last_day);
    if (last_day == 7) {
        last_day = 1;
    }
    else {
        last_day += 1;
    }
    
    cout << endl;
    cout << "November " << year << endl;
    last_day = printMonthCalendar(30, last_day);
    if (last_day == 7) {
        last_day = 1;
    }
    else {
        last_day += 1;
    }
    
    cout << endl;
    cout << "December " << year << endl;
    last_day = printMonthCalendar(31, last_day);
    if (last_day == 7) {
        last_day = 1;
    }
    else {
        last_day += 1;
    }
}
