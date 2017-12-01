#include "superhero.h"

Superhero::Superhero()                                      //std constrictor
{
    _name = "";
    _age = 0;
    _superpower = 'n';

}

Superhero::Superhero(string name, int age, char superpower) //std constrictor
{
    _name = name;
    _age = age;
    _superpower = superpower;

};

void Superhero::set_hero(Superhero superhero)
{
    cout << "Please enter hero name: ";
    cin >> superhero._name;
    cout << "Please enter hero age: ";
    cin >> superhero._age;
    cout << "Please enter the heroes superpower: ";
    cin >> superhero._superpower;
}

string return_superpower(char superpower)
{
    if(superpower == 'f') {
        return "Flying";
    } else if(superpower == 'h') {
        return "Hacker";
    } else if(superpower == 'g') {
        return "Giant";
    } else if(superpower == 'n') {
        return "None";
    } else {
        return "Weakling";
    }
}

ostream& operator << (ostream& outs, Superhero superhero)
{
    outs << superhero._name;
    outs << " (";
    outs << superhero._age;
    outs << ") ";
    outs << return_superpower(superhero._superpower) << endl;
    return outs;
};

istream& operator >> (istream& ins, Superhero &superhero)
{
    cout << "Please enter hero name: ";
    ins >> superhero._name;
    cout << "Please enter hero age: ";
    ins >> superhero._age;
    cout << "Please enter the heroes superpower: ";
    ins >> superhero._superpower;

    return ins;
}
