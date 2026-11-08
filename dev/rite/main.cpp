#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main(){
    string input;
    while (true) {
        cout << "$";
        getline(cin, input);
        if (input == "exit") {
            break;
        }
    }

}