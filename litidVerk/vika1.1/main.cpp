#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char ans = 'y';
    string str;
    ifstream fin;

    fin.open("textOutput.txt");
    if (fin.is_open()) {
                while (!fin.eof() && (ans == 'y' ||ans == 'Y')) {
                    for (int i = 0;i < 10; i++) {
                        getline(fin,str);
                        cout << str << endl;
                        if (fin.eof()) {
                            i = 10;
                        }
                    }
                    do {
                        cout << "\nDo you wish to continue? (y/n) ";
                        cin >> ans;
                    }while ((ans != 'y' && ans != 'Y') && (ans != 'n' && ans != 'N'));
                }
        fin.close();
    }

    else {
        cout << "could not read file!" << endl;
    }

    return 0;
}
