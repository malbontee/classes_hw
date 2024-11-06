#pragma once
#include <iostream>
using namespace std;

class FullName {
private:
    string name;
    string surname;
    string patronymic;

public:
    void set_name(const string& name);

    string get_name() const;

    void set_surname(const string& surname);

    string get_surname() const;

    void set_patronymic(const string& patronymic);

    string get_patronymic() const;
};
