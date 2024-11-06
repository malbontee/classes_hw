#include "Student.h"


    void Student::set_full_name(const string& name, const string& surname, const string& patronymic) {
        full_name.set_name(name);
        full_name.set_surname(surname);
        full_name.set_patronymic(patronymic);
    }

    void Student::print_full_name() const {
        cout << "Name: " << full_name.get_name() << "\n";
        cout << "Surname: " << full_name.get_surname() << "\n";
        cout << "Patronymic: " << full_name.get_patronymic() << "\n";
    }

    void Student::set_birthday(int day, int month, int year) {
        birthday.set_day(day);
        birthday.set_month(month);
        birthday.set_year(year);
    }

    void Student::print_birthday_date() const {
        cout << "Date of Birth: " << birthday.get_day() << "." << birthday.get_month() << "." << birthday.get_year() << "\n";
    }

    void Student::set_age(int age) {
        if (age >= 18 && age <= 95)
            this->age = age;
        else
            throw "Invalid value for age!";
    }

    int Student::get_age() const {
        return age;
    }

    void Student::set_email(const string& email) {
        this->email = email;
    }

    string Student::get_email() const {
        return email;
    }

    void Student::set_phone_number(const string& phone_number) {
        this->phone_number = phone_number;
    }

    string Student::get_phone_number() const {
        return phone_number;
    }

    void Student::set_attendance(int attendance) {
        if (attendance >= 0 && attendance <= 100)
            this->attendance = attendance;
        else
            throw "Invalid value for attendance!";
    }

    int Student::get_attendance() const {
        return attendance;
    }

    void Student::set_late(bool late) {
        this->late = late;
    }

    bool Student::get_late() const {
        return late;
    }

    void Student::visit_class() {
        if (attendance <= 95)
            attendance += 5;
        else
            attendance = 100;
        cout << "The student is currently in class.\n";
    }

    void Student::is_late() const {
        if (late)
            cout << "The student came late today!\n";
        else
            cout << "The student came on time today!\n";
    }

    void Student::skip_class() {
        attendance -= 5;
        cout << "The student decided to skip the class!\n";
    }

    void Student::show_attendance() const {
        if (attendance == 0)
            cout << "Your attendance is at 0%. This is unacceptable.\n";
        else
            cout << "You don't have problems with attendance: " << attendance << "%.\n";
    }

    void Student::fill_grades(int number) {
        grades = new int[number];
        cout << "Please enter " << number << " grades\n";
        for (int i = 0; i < number; ++i) {
            cout << "Grade " << (i + 1) << ": ";
            int grade;
            cin >> grade;
            if (grade > 0 && grade <= 12)
                grades[i] = grade;
            else
                throw "Invalid grade! Acceptable range is from 1 to 12.";
        }
    }

    void Student::print_grades(int number) const {
        for (int i = 0; i < number; ++i) {
            cout << "Grade " << (i + 1) << ": " << grades[i] << "\n";
        }
    }

    void Student::free_memory() {
        delete[] grades;
        grades = nullptr;
    }