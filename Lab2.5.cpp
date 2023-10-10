#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num1;
    cout << "Введите число:";
    cin >> num1;
    if (num1 % 3 & num1 % 5) {
        cout << "Число не кратно 3 и 5";
    }
    else {
        cout << "Число кратно 3 и 5";
    }
    
    

    return 0;
}