#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int num1;
    cout << "Введите год:";
    cin >> num1;
    if (num1 % 4 == 0) {
        cout << "Весокосный год";
    }
    else {
        cout << "Не весокосный год";
    }


    return 0;
}