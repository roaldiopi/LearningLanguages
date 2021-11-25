#include <iostream>
#include <iomanip>
//#include <conio.h> Заголовочный файл чтобы у windows пользователей  не закрывалось окно =)
using namespace std;

int main() {
    // Программа вычисления объема параллелепипеда
    double lentgh, width, height;
    cout << "Вычисление объема параллелепипеда." << endl;
    cout << "Введите исходные данные:" << endl;
    cout << "Длина (см):";
    cin >> lentgh;
    cout << "Ширина (см):";
    cin >> width;
    cout << "Высота (см):";
    cin >> height;
    cout << setprecision(2) << setiosflags(ios::fixed); // setprecision(2) так как в примере две цифры после запятой
    cout << "Объем: " << (lentgh * height * width) << " куб.см." << endl;
    // _getch();
    return 0;
}