#include <iostream>
#include <regex>

using namespace std;

int main() {
    string snils;
    cout << "ENTER SNILS: ";
    getline(cin, snils);
    regex regex("[0-9]{3}-[0-9]{3}-[0-9]{3} [0-9]{2}");

    while (not(regex_match(snils, regex))) {
        system("cls");
        cout << "SNILS is incorrect. Try again!" << endl;
        cout << "ENTER SNILS: ";
        getline(cin, snils);
    }
    cout << "SNILS is correct!" << endl;

    return 0;
}