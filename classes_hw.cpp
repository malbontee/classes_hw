#include "HairDryer.h"
#include "Dog.h"
#include "Phone.h"
#include "FullName.h"
#include "BirthdayDate.h"
#include "Student.h"

int main()
{
    HairDryer dryer;
    
    dryer.set_brand("Philips");
    dryer.set_price(2299);
    dryer.set_color("black");
    dryer.set_model("BHD274/00");
    dryer.set_power(2200);
    dryer.set_attachment1("Concentrator");
    dryer.set_attachment2("Diffuser");
    dryer.set_weight(0.85);
    dryer.turn_on_dryer();
    dryer.choose_attachment("Diffuser");
    dryer.turn_on_ionization();
    dryer.start_drying();
    dryer.dry_clothes();
    dryer.turn_off_ionization();
    dryer.turn_off_dryer();

    Dog dog;

    dog.set_name("Booba");
    dog.set_age(3.5);
    dog.set_sex("Male");
    dog.set_breed("Pug"); // мопсик
    dog.set_fur_color("Black");
    dog.set_owner("Bob");
    dog.set_paws(4);
    dog.set_is_alive(true);
    dog.set_fav_food("Meat-flavored dog food");
    dog.set_activity("Lying on the sofa :)");
    dog.set_energy(65);
    dog.show_owner();
    dog.show_name();
    dog.show_fav_food();
    dog.make_sound();
    dog.sleep();
    dog.do_activity();
    dog.eat("sausage");
    
    Phone phone;

    phone.set_brand("iPhone");
    phone.set_model("15 Pro Max");
    phone.set_color("titanium blue");
    phone.set_storage(256);
    phone.set_screen_diagonal(6.7);
    phone.set_operating_system("IOS");
    phone.set_cameras_number(3);
    phone.set_weight_grams(221);
    phone.set_width(76.7);
    phone.set_height(159.9);
    phone.set_screen_material("Ceramic Shield");
    phone.set_corpus_material("aluminum and titanium");
    phone.set_battery_capacity(4.422);
    phone.set_charge(54);
    phone.set_apps_number(100);
    phone.set_photos_number(2000);
    phone.set_current_app("Camera");
    phone.turn_on_phone();
    phone.charge_phone();
    phone.show_apps_number();
    phone.install_new_app();
    phone.delete_app(7);
    phone.turn_on_app();
    phone.make_photo(100);
    phone.delete_photo(99);
    phone.make_screenshot();
    phone.turn_on_music("Never let me down again");
    phone.turn_off_music();
    phone.turn_off_phone();

    Student student;

    student.set_full_name("Daryna", "Onopko", "Serhiivna");
    student.set_birthday(29, 11, 1998);
    student.set_age(25);
    student.set_email("darynaonopko98@gmail.com");
    student.set_phone_number("+380967092691");
    student.set_attendance(90);
    student.set_late(false);
    student.visit_class();
    student.is_late();
    student.skip_class();
    student.show_attendance();
    student.print_full_name();
    student.print_birthday_date();
    student.fill_grades(10);
    student.print_grades(10);
    student.free_memory();

}

