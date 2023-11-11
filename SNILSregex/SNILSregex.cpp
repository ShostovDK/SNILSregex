#include <iostream>
#include <regex>

using namespace std;

int main() {
    string snils;
    cout << "ENTER SNILS: ";
    getline(cin, snils);
    regex regex("[0-9]{3}-[0-9]{3}-[0-9]{3} [0-9]{2}");
    int sum = 0;
    int f = 9;
    for (int i = 0; i < snils.length() - 2; i++) {
        if (isdigit(snils[i])) {
            sum += int(snils[i] - 48) * f;
            f -= 1;
        }
     }

    if ((sum % 100) != (snils[snils.length() - 1] - 48 + snils[snils.length() - 2] * 10 - 480)) {
        cout << "Control is incorect!" << endl;
        return 0;
    }
    while (not(regex_match(snils, regex))) {
        system("cls");
        cout << "SNILS is incorrect. Try again!" << endl;
        cout << "ENTER SNILS: ";
        getline(cin, snils);
    }
    cout << "SNILS is correct!" << endl;

    return 0;
}
