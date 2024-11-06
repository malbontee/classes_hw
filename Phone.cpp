#include "Phone.h"

void Phone::set_brand(const string& brand) {
    this->brand = brand;
}

string Phone::get_brand() const {
    return brand;
}

void Phone::set_model(const string& model) {
    this->model = model;
}

string Phone::get_model() const {
    return model;
}

void Phone::set_color(const string& color) {
    this->color = color;
}

string Phone::get_color() const {
    return color;
}

void Phone::set_storage(int storage_in_gb) {
    if (storage_in_gb > 0)
        this->storage_in_gb = storage_in_gb;
    else
        throw "Invalid value for storage of the phone!";
}

int Phone::get_storage() const {
    return storage_in_gb;
}

void Phone::set_screen_diagonal(double screen_diagonal) {
    if (screen_diagonal > 0)
        this->screen_diagonal = screen_diagonal;
    else
        throw "Invalid value for screen diagonal!";
}

double Phone::get_screen_diagonal() const {
    return screen_diagonal;
}

void Phone::set_operating_system(const string& operating_system) {
    this->operating_system = operating_system;
}

string Phone::get_operating_system() const {
    return operating_system;
}

void Phone::set_cameras_number(int cameras_number) {
    if (cameras_number > 0)
        this->cameras_number = cameras_number;
    else
        throw "Invalid value for number of cameras!";
}

int Phone::get_cameras_number() const {
    return cameras_number;
}

void Phone::set_weight_grams(int weight_grams) {
    if (weight_grams > 0)
        this->weight_grams = weight_grams;
    else
        throw "Invalid value for weight of the phone!";
}

int Phone::get_weight_grams() const {
    return weight_grams;
}

void Phone::set_width(double width_in_mm) {
    if (width_in_mm > 0)
        this->width_in_mm = width_in_mm;
    else
        throw "Invalid value for width of the phone!";
}

double Phone::get_width() const {
    return width_in_mm;
}

void Phone::set_height(double height_in_mm) {
    if (height_in_mm > 0)
        this->height_in_mm = height_in_mm;
    else
        throw "Invalid value for height of the phone!";
}

double Phone::get_height() const {
    return height_in_mm;
}

void Phone::set_screen_material(const string& screen_material) {
    this->screen_material = screen_material;
}

string Phone::get_screen_material() const {
    return screen_material;
}

void Phone::set_corpus_material(const string& corpus_material) {
    this->corpus_material = corpus_material;
}

string Phone::get_corpus_material() const {
    return corpus_material;
}

void Phone::set_battery_capacity(double battery_capacity_mah) {
    if (battery_capacity_mah > 0)
        this->battery_capacity_mah = battery_capacity_mah;
    else
        throw "Invalid value for battery capacity of the phone!";
}

double Phone::get_battery_capacity() const {
    return battery_capacity_mah;
}

void Phone::set_charge(int charge) {
    if (charge >= 0)
        this->charge = charge;
    else
        throw "Invalid value for charge of the phone!";
}

int Phone::get_charge() const {
    return charge;
}

void Phone::set_apps_number(int apps_number) {
    if (apps_number > 0)
        this->apps_number = apps_number;
    else
        throw "Invalid value for number of applications of the phone!";
}

int Phone::get_apps_number() const {
    return apps_number;
}

void Phone::set_photos_number(int photos_number) {
    if (photos_number >= 0)
        this->photos_number = photos_number;
    else
        throw "Invalid value for number of photos of the phone!";
}

int Phone::get_photos_number() const {
    return photos_number;
}

void Phone::set_current_app(const string& current_app) {
    this->current_app = current_app;
}

string Phone::get_current_app() const {
    return current_app;
}

void Phone::turn_on_phone() {
    cout << "You turned on the phone! You can use it now!\n";
}

void Phone::charge_phone() {
    if (charge < 100)
        cout << "The phone is charging now!\n";
    else
        cout << "The phone is already charged!\n";
}

void Phone::show_apps_number() {
    cout << "Number of the installed applications: " << apps_number << "\n";
}

void Phone::install_new_app() {
    if (apps_number < 500) {
        apps_number += 1;
        cout << "You have installed new application successfully! Number of the apps on your phone right now: " << apps_number << "\n";
    }
    else {
        cout << "You have installed the maximum number of applications! Your phone is out of free memory. To install a new application, you must clear the memory on your phone!\n";
    }
}

void Phone::delete_app(int delete_number) {
    if (delete_number <= 0)
        throw "You entered invalid value! Number must be positive!\n";
    else {
        apps_number -= delete_number;
        cout << "You have deleted the chosen applications successfully! Updated number of apps on your phone: " << apps_number << "\n";
    }
}

void Phone::turn_on_app() {
    cout << "Currently running application: " << current_app << "\n";
}

void Phone::make_photo(int photos_num) {
    if ((current_app == "camera" || current_app == "Camera") && photos_num > 0) {
        cout << "You have made " << photos_num << " photos successfully!\n";
    }
    else {
        cout << "You need to turn on the phone's camera to make a photo! / Number of photos you want to make must be positive!\n";
    }
}

void Phone::delete_photo(int delete_num) {
    if (delete_num <= 0) {
        throw "Invalid value! Number of photos you want to delete can't be negative or zero. Number must be positive!\n";
    }
    else if (photos_number == 0) {
        cout << "You don't have photos to delete!\n";
    }
    else {
        photos_number -= delete_num;
        cout << "You have deleted the chosen number of photos successfully! Updated number of photos: " << photos_number << "\n";
    }
}

void Phone::make_screenshot() {
    photos_number += 1;
    cout << "You have taken a screenshot! Total photos: " << photos_number << "\n";
}

void Phone::turn_on_music(string song_name) {
    cout << "Currently playing song: " << song_name << "\n";
}
void Phone::turn_off_music() {
    cout << "The music is turned off successfully!\n";
}
void Phone::turn_off_phone() {
    cout << "The phone is turned off successfully!\n\n";
}
