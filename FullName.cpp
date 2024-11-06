#include "FullName.h"

void FullName::set_name(const string& name) {
    this->name = name;
}

string FullName::get_name() const {
    return name;
}

void FullName::set_surname(const string& surname) {
    this->surname = surname;
}

string FullName::get_surname() const {
    return surname;
}

void FullName::set_patronymic(const string& patronymic) {
    this->patronymic = patronymic;
}

string FullName::get_patronymic() const {
    return patronymic;
}