#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(0));
    int num = rand() % 101;
    int guess;

    cout << "Угадайте число от 0 до 100!\n";

    do {
        cout << "Ваше число: ";
        cin >> guess;

        if (guess < num) {
            cout << "Больше!\n";
        }
        else if (guess > num) {
            cout << "Меньше!\n";
        }
        else {
            cout << "Угадали!\n";
            break;
        }
    } while (true);

    return 0;
}
