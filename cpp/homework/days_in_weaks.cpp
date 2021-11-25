#include <iostream>
//#include <conio.h> Заголовочный файл чтобы у windows пользователей  не закрывалось окно =)
using namespace std;

int main() {
    // Прогграма конвентирует дни в недели
    int days;
    cout << "Введите количество прошедших дней в месяце: " << endl;
    cin >> days;
    cout << days << " дней это " << (days/7) << " недели и " << (days%7) << " дня";
    // _getch();
    return 0;
}