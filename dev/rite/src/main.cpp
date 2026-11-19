#include <iostream>
#include <string>
#include <fstream>

using namespace std;
string fname;
string input;
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

int main(){
    while (true)
    {
        cout << "$";
        getline(cin, input);
        if (input == "exit")
        {
            break;
        }
        else if (input == "save")
        {
            cout << "Enter file name: " << fname;
            get_fIn(input, fname);
            cout << "File saved as: " << fname << endl;
            give_fOut(fname, input);
            break;
        }
        
    }

}