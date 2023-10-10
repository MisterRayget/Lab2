#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num1;
    cout << "Введите число:";
    cin >> num1;
    if (num1 > 0) {
        cout << "Положительное число";
    }
    if (num1 < 0) {
        cout << "Отрицательное число";
    }
    if(num1==0){
        cout << "Это 0:)";
    }

    return 0;
}