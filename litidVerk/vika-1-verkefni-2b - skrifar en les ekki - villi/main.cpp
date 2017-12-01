#include <iostream>
#include "superhero.h"
#include <vector>

using namespace std;

char start_menu(char &choose_operation);
void list_heroes();


int main()
{

    ofstream fout;
    ifstream fin;

    char choose_operation = 'x';
    start_menu(choose_operation);
    if(choose_operation == '1') {
        int size = 0;
        cout << "How many heroes to you want to type?: ";
        cin >> size;
        Superhero superlist[size];
        Superhero superhero;
        cout << sizeof(superlist)/sizeof(superhero);
        for(unsigned int i = 0; i < sizeof(superlist)/sizeof(superhero); i++) {

            superlist[i] = superhero;
            fout.open("stuff.binstuff", ios::app|ios::binary);
            if(fout.is_open()) {
                cin >> superhero;
                cout << superhero;
                ;
            } else {
                cout << "File error please contact a hacker";
            }
            fout.write((char*)(&superhero), sizeof(Superhero));
            fout.close();
        }
    } else if(choose_operation == '2') {
        fin.open("stuff.binstuff", ios::binary);

        if(fin.is_open()) {
            while(!fin.eof()) {

                string stuff;
                Superhero superhero;
                                                            // getline(fin, stuff);                           // cout << stuff;
                int counter = 0;
                fin.seekg(0,fin.end);                       //verdur ad vera til ad crassa ekki dno why
                int lines = fin.tellg() / sizeof(Superhero);//verdur ad vera til ad crassa ekki dno why
                getline(fin, stuff);
                fin.read((char*)(&superhero), lines);       //VIRAKR EKKI tvi thette er ekki ad lesa classa
                //counter++;
                                                            // crasshar program med 255
                                                            // VIRKAR EKKI RETT UPPA AD LESA SEM CLASSA A SKJAINN*/
            }
        } else {
            cout << "File error please contact a hacker";
        }
        fin.close();
    }


    return 0;
}

char start_menu(char &choose_operation)
{
    do {
        cout << "1. Create a new hero." << endl
             << "2. List existing heroes." << endl << "Enter choice: ";
        cin >> choose_operation;

        if(choose_operation == '1') {
            return '1';
        } else if(choose_operation == '2') {
            return '2';
        } else {
            cout << "Invalid input, please choose one of the options given" << endl;
            return 'x';
        }
    } while(choose_operation != '1' && choose_operation != '2');

};
