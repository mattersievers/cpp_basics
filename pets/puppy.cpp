#include <iostream>
#include "puppy.hpp"
using namespace std;

Puppy::Puppy(string new_name, string new_color, string new_breed, int new_age)
: name(new_name),color(new_color), breed(new_breed), age(new_age) {}

Puppy::~Puppy(){

}

string Puppy::get_info(){
    string age_string = to_string(age);
    return "This dog is named " + name + ".\nThey are a " + age_string + " year old " + breed + " with a lovely " + color + " fur coat.\n"+ name + " is a good dog. Good dog!\n\n";
}