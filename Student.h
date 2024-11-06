#pragma once
#include "FullName.h"
#include "BirthdayDate.h"
#include <iostream>
using namespace std;

class Student {
private:
    FullName full_name;
    BirthdayDate birthday;
    int* grades = nullptr;
    int age = 24;
    string email;
    string phone_number;
    int attendance = 0;
    bool late = false;

public:
    void set_full_name(const string& name, const string& surname, const string& patronymic);
    
    void print_full_name() const;

    void set_birthday(int day, int month, int year);
    
    void print_birthday_date() const;

    void set_age(int age);
    
    int get_age() const;

    void set_email(const string& email);
    
    string get_email() const;

    void set_phone_number(const string& phone_number);
    
    string get_phone_number() const;

    void set_attendance(int attendance);
    
    int get_attendance() const;

    void set_late(bool late);
    
    bool get_late() const;

    void visit_class();
    
    void is_late() const;
    
    void skip_class();
    
    void show_attendance() const;

    void fill_grades(int number);
    
    void print_grades(int number) const;
    
    void free_memory();

};
