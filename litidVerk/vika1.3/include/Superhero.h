#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream>


using namespace std;

class Superhero
{
    public:
        Superhero();
        Superhero(int _age, string _name, char _power);
        void NewValues(int _age, string _name, char _power);
        friend ostream& operator <<(ostream& out, Superhero& hero);
        friend istream& operator >>(istream& in, Superhero& hero);
        virtual ~Superhero();



    private:
        int age;
        string name;
        char power;
};

#endif // SUPERHERO_H
