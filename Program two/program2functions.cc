// Copyright 2023 Liya Patel 
#include"program2functions.h"
#include<iostream>

#include<cmath>

bool LeapYear(int year){
    // return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
    if(year % 4 != 0) { 
        return false;
    } else if (year % 100 != 0) { 
        return true;
    } else if (year % 400 != 0) { 
        return false;
    } else { 
        return true;
    }
}

/*int LastDayOfMonth(int month, int year){
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
}*/
int LastDayOfMonth(int month, int year) {
  if (month < 1 || month > 12) {
    return 0;
  }
  if (month == 2) {
    if (year <= 0) {
      return 0;
    }
    if (year % 4 == 0) {
      if (year % 100 == 0) {
        if (year % 400 == 0) {
          return 29;
        }
        return 28;
      }
      return 29;
    }
    return 28;
  }
  if (month == 4 || month == 6 || month == 9 || month == 11) {
    return 30;
  }
  return 31;
}

/*bool ValidDate(int month, int day, int year) {
    if (month < 1 || month > 12) 
      return false;
    if (day >= 1 && day <= LastDayOfMonth(month, year))
    return true;
    //return day >= 1 && day <= LastDayOfMonth(month, year);
}*/

bool ValidDate(int month, int day, int year) {
  if (year <= 0) {
    return false;
  }
  if (month < 1 || month > 12) {
    return false;
  }
  int lastDay = 31;
  if (month == 2) {
    if (year % 4 == 0) {
      if (year % 100 == 0) {
        if (year % 400 == 0) {
          lastDay = 29;
        } else {
          lastDay = 28;
        }
      } else {
        lastDay = 29;
      }
    } else {
      lastDay = 28;
    }
  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    lastDay = 30;
  }
  return day >= 1 && day <= lastDay;
}

/*void NextDate(int &month, int &day, int &year) {
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
}*/

void NextDate(int &month, int &day, int &year) {
  int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month < 1 || month > 12 || day < 1 || day > daysInMonth[month] || year < 1) {
    return;
  }
  day++;
  if (day > daysInMonth[month]) {
    day = 1;
    month++;
    if (month > 12) {
      month = 1;
      year++;
    }
  }
}
// 5/15/2024 2/7/2024

/*void PreviousDate(int &month, int &day, int &year) {
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
}*/
void PreviousDate(int &month, int &day, int &year) {
  if (month == 2) {
    if (day == 1) {
      day = 31;
      --month;
    } else if (day == 29 && year % 4 != 0) {
      day = 28;
    } else if (day == 28 && year % 4 == 0) {
      day = 29;
    } else {
      --day;
    }
  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    if (day == 1) {
      day = 31;
      --month;
    } else {
      --day;
    }
  } else if (month == 1) {
    if (day == 1) {
      day = 31;
      month = 12;
      --year;
    } else {
      --day;
    }
  } else {
    if (day == 1) {
      day = 30;
      --month;
    } else {
      --day;
    }
  }
}
