#include <iostream>
#include <string>
#include <fstream>
#include <rite_utils.h>

using namespace std;


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