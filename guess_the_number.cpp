#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));

    int random_number = rand()%99;
    random_number = random_number + 1;

    cout << "I am thinking of a number from 1 to 100. Can you guess it?\n";
    int player_guess;
    cin >> player_guess;

    while(player_guess != random_number){
        cout <<"Your guess does not match the random number. Try again.\n";
        cin >> player_guess;
    }
    cout << "Congratulations! You guessed correctly!\n YAY!!! \n PARTY!!! \n.\n .\n  .\n   .\n  .\n .\n.\n";

}