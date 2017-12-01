#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str = "";
    ofstream fout;

    fout.open("textFile.txt",ios::app);

    if (fout.is_open()) {
        while (str[0] != '\\') {
            getline(cin, str);
            if (str[0] != '\\') {
                fout << str << endl;
            }
        }
        fout.close();
    }

    return 0;
}
