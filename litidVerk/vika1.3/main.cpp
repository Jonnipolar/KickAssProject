#include <iostream>
#include "Superhero.h"
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    Superhero hero;
    char ans = '\0';

    cout << "Enter w to write a hero:\nEnter r to read the list of heroes: ";
    cin >> ans;

    if (ans == 'w') {
        ofstream fout;
        fout.open("textFile.txt", ios::app);
        fout << hero;
        fout.close();
    }
    else if (ans == 'r') {
        string str = "";
        int age = 0;
        string name = "";
        char pow = '\0';
        stringstream ss;
        ifstream fin;

        fin.open("textFile.txt");
        if (fin.is_open()) {
            while(!fin.eof()) {
                getline(fin, str);
                if (!str.empty()) {
                    ss << str;
                    ss >> name >> age >> pow;
                    hero.NewValues(age,name,pow);
                    fin >> hero;
                }
            }
        fin.close();
        }
    }
    else {
        cout << "Illegal Operation!!!";
    }
    return 0;
}
