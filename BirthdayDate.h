#pragma once
#include <iostream>
using namespace std;

class BirthdayDate {
private:
    int day = 1;
    int month = 1;
    int year = 2000;

public:
    void set_day(int day);
    
    int get_day() const;

    void set_month(int month);

    int get_month() const;

    void set_year(int year);

    int get_year() const;
};