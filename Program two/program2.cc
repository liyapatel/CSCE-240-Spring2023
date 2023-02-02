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
        cout << "date is not a valid date" << std::endl;
        return 1;
    }

    int days = 0;
    while (firstMonth != secondMonth || firstDay != secondDay || firstYear != secondYear) {
        NextDate(firstMonth, firstDay, firstYear);
        ++days;
    }
    cout << "firstdate is " << (days == 0 ? "" : (days > 0 ? "before " : "after ")) << days << " days "
              << (days == 0 ? "" : (days > 0 ? "seconddate" : "firstdate")) << std::endl;
    return 0;
}