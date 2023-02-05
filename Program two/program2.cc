// Copyright 2023 Liya Patel 
#include"program2functions.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

 int main() {
    int firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear;
    char separator1, separator2;
    cin >> firstMonth >> separator1 >> firstDay >> separator2 >> firstYear;
    cin >> secondMonth >> separator1 >> secondDay >> separator2 >> secondYear;

    if (!ValidDate(firstMonth, firstDay, firstYear) || !ValidDate(secondMonth, secondDay, secondYear)) {
        cout << firstMonth << separator1 << firstDay << separator2 << firstYear << " is not a valid date" << endl;
        cout << secondMonth << separator1 << secondDay << separator2 << secondYear << " is not a valid date" << endl;
        return 0;
    }

    int days = 0;
    cout << firstMonth << separator1 << firstDay << separator2 << firstYear; 
    while (firstMonth != secondMonth || firstDay != secondDay || firstYear != secondYear) {
        NextDate(firstMonth, firstDay, firstYear);
        ++days;
    }
    
    cout << " is " << days << " days " << ((days >= 0 ? "before " : "after "));
    cout << secondMonth << separator1 << secondDay << separator2 << secondYear << endl;

    return 0;

    cout << firstMonth << separator1 << firstDay << separator2 << firstYear; 
    while (firstMonth != secondMonth || firstDay != secondDay || firstYear != secondYear) {
        NextDate(firstMonth, firstDay, firstYear);
        // ++days;
    }
    
    cout << " is " << days << " days " << ((days <= 0 ? "before " : "after "));
    cout << secondMonth << separator1 << secondDay << separator2 << secondYear << endl;

    return 0;
}

//ask abt grading clean compliation vs individual function
//ask abt correct test 1- date is repeated
//ask abt infinite loop in correct test 2
//why is it still giving error for correct test 4 when it matches my output
//const errors in terminal