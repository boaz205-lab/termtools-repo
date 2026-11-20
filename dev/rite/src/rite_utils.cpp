#include <rite_utils.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int get_fIn(string input, string f_name)
{
    fname = f_name;
    ofstream file(f_name, ios::in);
    if (!file.is_open())
    {
        cout << "Error opening file: " << f_name << endl;
        return 1;
    }
    getline(cin, input);
    file << input;
    file.close();
    return 0;
}

int give_fOut(string f_name, string input)
{
    ifstream file(f_name);
    fname = f_name;
    if (!file.is_open())
    {
        cout << "Error opening file: " << f_name << endl;
        return 1;
    }
    if (!getline(file, input))
    {
        cout << "Error reading from file: " << f_name << endl;
        return 1;
    }
    getline(file, input);
    cout << input;
    file.close();
    return 0;
}

int get_fName(string f_name, string input)
{
    cout << "Enter file name: ";
    getline(cin, f_name);
    f_name = fname;
    return 0;
}