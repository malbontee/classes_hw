#include "Dog.h"

void Dog::set_name(const string& name) {
    this->name = name;
}

string Dog::get_name() const {
    return name;
}

void Dog::set_age(double age) {
    if (age > 0 && age <= 30.0)
        this->age = age;
    else
        throw "Invalid value for age!";
}

double Dog::get_age() const {
    return age;
}

void Dog::set_sex(const string& sex) {
    if (sex == "male" || sex == "Male" || sex == "female" || sex == "Female")
        this->sex = sex;
    else
        throw "Invalid value for sex!";
}

string Dog::get_sex() const {
    return sex;
}

void Dog::set_breed(const string& breed) {
    this->breed = breed;
}

string Dog::get_breed() const {
    return breed;
}

void Dog::set_fur_color(const string& fur_color) {
    this->fur_color = fur_color;
}

string Dog::get_fur_color() const {
    return fur_color;
}

void Dog::set_owner(const string& owner) {
    this->owner = owner;
}

string Dog::get_owner() const {
    return owner;
}

void Dog::set_paws(int paws) {
    if (paws > 0 && paws <= 4)
        this->paws = paws;
    else
        throw "Invalid value for paws!";
}

int Dog::get_paws() const {
    return paws;
}

void Dog::set_is_alive(bool is_alive) {
    this->is_alive = is_alive;
}

bool Dog::get_is_alive() const {
    return is_alive;
}

void Dog::set_fav_food(const string& fav_food) {
    this->fav_food = fav_food;
}

string Dog::get_fav_food() const {
    return fav_food;
}

void Dog::set_activity(const string& activity) {
    this->activity = activity;
}

string Dog::get_activity() const {
    return activity;
}

void Dog::set_energy(int energy) {
    if (energy >= 0 && energy <= 100)
        this->energy = energy;
    else
        throw "Invalid value for energy!";
}

int Dog::get_energy() const {
    return energy;
}

void Dog::show_owner() {
    cout << "The owner(-s) of this dog: " << owner << "\n";
}

void Dog::show_name() {
    cout << "Name of this dog: " << name << "\n";
}

void Dog::show_fav_food() {
    cout << "Favourite food of this dog: " << fav_food << "\n";
}

void Dog::make_sound() {
    cout << "WOOF WOOF WOOF!\n";
}

void Dog::sleep() {
    if (energy <= 30) {
        cout << "Dog is sleeping right now, he/she is tired and needs some rest!\n";
    }
    else {
        cout << "Dog is full of energy and doesn't want to sleep now. He/She wants to play with you!\n";
    }
}

void Dog::do_activity() {
    cout << "What this dog is doing right now: " << activity << "\n";
}

void Dog::eat(const string& meal) {
    cout << "Dog is eating " << meal << " right now!\n\n";
}
