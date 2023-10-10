#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num1;
    cout << "Введите год:";
    cin >> num1;
    if (num1 & 100) {
        cout << "Вековой год";
    }
    else {
        cout << "Не вековой год";
    }

    return 0;
}
