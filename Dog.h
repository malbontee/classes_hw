#pragma once
#include <iostream>
using namespace std;

class Dog {
    string name;
    double age = 1.0;
    string sex;
    string breed;
    string fur_color;
    string owner;
    int paws = 4;
    bool is_alive;
    string fav_food;
    string activity;
    int energy = 100;

public:
    void set_name(const string& name);

    string get_name() const;
    
    void set_age(double age);
    
    double get_age() const;
    
    void set_sex(const string& sex);

    string get_sex() const;

    void set_breed(const string& breed);

    string get_breed() const;

    void set_fur_color(const string& fur_color);

    string get_fur_color() const;

    void set_owner(const string& owner);

    string get_owner() const;

    void set_paws(int paws);

    int get_paws() const;

    void set_is_alive(bool is_alive);

    bool get_is_alive() const;

    void set_fav_food(const string& fav_food);

    string get_fav_food() const;

    void set_activity(const string& activity);

    string get_activity() const;

    void set_energy(int energy);

    int get_energy() const;

    void show_owner();

    void show_name();

    void show_fav_food();

    void make_sound();

    void sleep();

    void do_activity();

    void eat(const string& meal);
};

