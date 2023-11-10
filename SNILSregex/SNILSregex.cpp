#include <iostream>
#include <regex>

using namespace std;

int main() {
    string snils;
    cout << "ENTER SNILS: ";
    cin >> snils;

    // Проверка на корректность с использованием регулярного выражения
    regex regex("[0-9]{3}-[0-9]{3}-[0-9]{3} [0-9]{2}");
    if (regex_match(snils, regex)) {
        cout << "SNILS is correct!" << endl;
    }
    else {
        cout << "SNILS is incorrect!" << endl;
    }

    return 0;
}