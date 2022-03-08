#include <iostream>
#include "puppy.hpp"

/* The purpose of this exercise is to practice constructor classes. */

int main(){
    Puppy genie("Genie","Black, White, and Brown", "Jack-Chi", 10);
    Puppy willy("Willy Wonka","Chocolate Brown", "Chiweenie", 7);

    cout << genie.get_info();
    cout << willy.get_info();
}