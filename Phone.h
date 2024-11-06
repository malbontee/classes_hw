#pragma once
#include <iostream>
using namespace std;

class Phone {
    string brand;
    string model;
    string color;
    int storage_in_gb = 128;
    double screen_diagonal = 5.7;
    string operating_system;
    int cameras_number = 3;
    int weight_grams = 45;
    double width_in_mm = 2.5;
    double height_in_mm = 8.0;
    string screen_material;
    string corpus_material;
    double battery_capacity_mah = 5.0;
    int charge = 100;
    int apps_number = 20;
    int photos_number = 0;
    string current_app;

public:
    void set_brand(const string& brand);
    
    string get_brand() const;

    void set_model(const string& model);
    
    string get_model() const;

    void set_color(const string& color);
    
    string get_color() const;

    void set_storage(int storage_in_gb);
    
    int get_storage() const;

    void set_screen_diagonal(double screen_diagonal);
    
    double get_screen_diagonal() const;

    void set_operating_system(const string& operating_system);
    
    string get_operating_system() const;

    void set_cameras_number(int cameras_number);
    
    int get_cameras_number() const;

    void set_weight_grams(int weight_grams);
    
    int get_weight_grams() const;

    void set_width(double width_in_mm);
    
    double get_width() const;

    void set_height(double height_in_mm);
    
    double get_height() const;

    void set_screen_material(const string& screen_material);
    
    string get_screen_material() const;

    void set_corpus_material(const string& corpus_material);
    
    string get_corpus_material() const;

    void set_battery_capacity(double battery_capacity_mah);
    
    double get_battery_capacity() const;

    void set_charge(int charge);
    
    int get_charge() const;

    void set_apps_number(int apps_number);
    
    int get_apps_number() const;

    void set_photos_number(int photos_number);
    
    int get_photos_number() const;

    void set_current_app(const string& current_app);
    
    string get_current_app() const;

    void turn_on_phone();
    
    void charge_phone();
    
    void show_apps_number();
    
    void install_new_app();
    
    void delete_app(int delete_number);
    
    void turn_on_app();
    
    void make_photo(int photos_num);
    
    void delete_photo(int delete_num);
    
    void make_screenshot();
    
    void turn_on_music(string song_name);
    
    void turn_off_music();
    
    void turn_off_phone();
};

