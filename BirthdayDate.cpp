#include "BirthdayDate.h"

void BirthdayDate::set_day(int day) {
    if (day > 0 && day <= 31)
        this->day = day;
    else
        throw "Invalid value for day! Acceptable range is from 1 to 31 inclusive.";
}

int BirthdayDate::get_day() const {
    return day;
}

void BirthdayDate::set_month(int month) {
    if (month > 0 && month <= 12)
        this->month = month;
    else
        throw "Invalid value for month! Acceptable range is from 1 to 12 inclusive.";
}

int BirthdayDate::get_month() const {
    return month;
}

void BirthdayDate::set_year(int year) {
    if (year >= 1930 && year <= 2006)
        this->year = year;
    else
        throw "Invalid value for year!";
}

int BirthdayDate::get_year() const {
    return year;
}