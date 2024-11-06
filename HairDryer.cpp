#include "HairDryer.h"

void HairDryer::set_brand(const string& brand) {
    this->brand = brand;
}

string HairDryer::get_brand() const {
    return brand;
}

void HairDryer::set_price(int price) {
    this->price = price;
}

int HairDryer::get_price() const {
    return price;
}

void HairDryer::set_color(const string& color) {
    this->color = color;
}

string HairDryer::get_color() const {
    return color;
}

void HairDryer::set_model(const string& model) {
    this->model = model;
}

string HairDryer::get_model() const {
    return model;
}

void HairDryer::set_power(int power_in_w) {
    this->power_in_w = power_in_w;
}

int HairDryer::get_power() const {
    return power_in_w;
}

void HairDryer::set_attachment1(const string& attachment1) {
    if (attachment1 == "Concentrator" || attachment1 == "concentrator")
        this->attachment1 = attachment1;
    else
        throw "Invalid value for attachment 1!";
}

string HairDryer::get_attachment1() const {
    return attachment1;
}

void HairDryer::set_attachment2(const string& attachment2) {
    if (attachment2 == "Diffuser" || attachment2 == "diffuser")
        this->attachment2 = attachment2;
    else
        throw "Invalid value for attachment 2!";
}

string HairDryer::get_attachment2() const {
    return attachment2;
}

void HairDryer::set_weight(double weight) {
    this->weight = weight;
}

double HairDryer::get_weight() const {
    return weight;
}

void HairDryer::turn_on_dryer() {
    cout << "The hair dryer is on!\n";
}

void HairDryer::choose_attachment(const string& attachment) {
    if (attachment == attachment1 || attachment == attachment2) {
        cout << "You chose the attachment: " << attachment << "!\n";
        current_attachment = attachment;
    }
    else {
        throw "Invalid value!";
    }
}

void HairDryer::turn_on_ionization() {
    cout << "Ionization mode is on!\n";
}

void HairDryer::start_drying() {
    cout << "Drying your hair with: " << current_attachment << "!\n";
}

void HairDryer::dry_clothes() {
    cout << "Drying your clothes!\n";
}

void HairDryer::turn_off_ionization() {
    cout << "Ionization mode is off!\n";
}

void HairDryer::turn_off_dryer() {
    cout << "The hair dryer is off!\n\n";
}
