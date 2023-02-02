// Copyright 2023 Liya Patel 
#include"program2functions.h"
#include<iostream>

#include<cmath>

bool LeapYear(int year){
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

int LastDayOfMonth(int month, int year = 0){
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            return LeapYear(year) ? 29 : 28;
        default:
            return 0;
    }
}

bool ValidDate(int month, int day, int year) {
    if (month < 1 || month > 12) 
      return false;
    if (day >= 1 && day <= LastDayOfMonth(month, year))
    return true;
    //return day >= 1 && day <= LastDayOfMonth(month, year);
}

void NextDate(int &month, int &day, int &year) {
    int lastDay = LastDayOfMonth(month, year);
    if (day < lastDay) {
        ++day;
    } else {
        day = 1;
        if (month < 12) {
            ++month;
        } else {
            month = 1;
            ++year;
        }
    }
}

void PreviousDate(int &month, int &day, int &year) {
    if (day > 1) {
        --day;
    } else {
        if (month > 1) {
            --month;
        } else {
            month = 12;
            --year;
        }
        day = LastDayOfMonth(month, year);
    }
}



