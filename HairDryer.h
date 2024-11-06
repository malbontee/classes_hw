#pragma once
#include <iostream>
using namespace std;

class HairDryer {
    string brand;
    int price = 1000;
    string color;
    string model;
    int power_in_w = 220;
    string attachment1;
    string attachment2;
    double weight = 2.5;
    string current_attachment;

public:
    void set_brand(const string& brand);
    
    string get_brand() const;
    
    void set_price(int price);
    
    int get_price() const;
    
    void set_color(const string& color);
    
    string get_color() const;
    
    void set_model(const string& model);
    
    string get_model() const;
    
    void set_power(int power_in_w);
    
    int get_power() const;
    
    void set_attachment1(const string& attachment1);
    
    string get_attachment1() const;
    
    void set_attachment2(const string& attachment2);
    
    string get_attachment2() const;
    
    void set_weight(double weight);
    
    double get_weight() const;
    
    void turn_on_dryer();
   
    void choose_attachment(const string& attachment);
        
    void turn_on_ionization();
    
    void start_drying();
    
    void dry_clothes();
    
    void turn_off_ionization();
    
    void turn_off_dryer();
    
};

