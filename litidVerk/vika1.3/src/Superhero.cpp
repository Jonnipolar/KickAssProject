#include "Superhero.h"
#include <iostream>

using namespace std;
Superhero::Superhero()
{
    age = 0;
    name = "";
    power = 'n';
}
Superhero::Superhero(int _age, string _name, char _power) {
    age = _age;
    name = _name;
    power = _power;
}
void Superhero::NewValues(int _age, string _name, char _power) {
    age = _age;
    name = _name;
    power = _power;
}
ostream& operator <<(ostream& out, Superhero& hero) {
    cout << "Please enter Superhero name: ";
    cin >> hero.name;
    cout << "Please enter Superhero age: ";
    cin >> hero.age;
    cout << "Please enter Superhero power:\n\tf for Flying\n\tg for Giant\n\th for Hacker\n\tn for None\n\tanything else for Weakling: ";
    cin >> hero.power;
    out << hero.name << " " << hero.age << " " << hero.power << endl;

    return out;
}
istream& operator >>(istream& in, Superhero& hero) {
    string power;
    if (hero.power == 'f' || hero.power == 'F') {
            power = "Flying";
        }
    else if(hero.power == 'g' || hero.power == 'G') {
            power = "Giant";
    }
    else if(hero.power == 'h' || hero.power == 'H') {
            power = "Hacker";
    }
    else if(hero.power == 'n' || hero.power == 'N') {
            power = "None";
    }
    else {
            power = "Weakling";
    }
    cout << hero.name << "(" << hero.age << "): " << power << endl;
    return in;
}
Superhero::~Superhero()
{

}

