#include <iostream>
//#include <conio.h> Заголовочный файл чтобы у windows пользователей  не закрывалось окно =)
using namespace std;

int main() {
    double versts;
    //Прогграма переводит расстояние в верстах в километры
    cout << "Укажите расстояние в верстах: ";
    cin >> versts;
    cout << "Ваше расстояние в километрах: " << (versts * 1.0668) << endl; // литерал 1.0668 взят из гугла(https://allcalc.ru/converter/versta-kilometr)
    // _getch();
    return 0;
}