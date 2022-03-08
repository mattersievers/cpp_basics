#include <string>
using namespace std;

class Puppy {
    string name;
    string color;
    string breed;
    int age;

    public:
    Puppy(string new_name, string new_color, string new_breed, int new_age);
    ~Puppy();

    string get_info();
};