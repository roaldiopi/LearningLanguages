#include <iostream>
#include <limits.h> //Для числовых констант
#include <iomanip> //Для манипуляции с представлением чисел
using namespace std;

int main() {
    //Арифметические операции + - * / %
    //%-остаток целочисленного деления / деление по модулю
    cout << "15 + 2 = " << 15+2  << endl;
    cout << "15 - 2 = " << 15-2  << endl;
    cout << "15 * 2 = " << 15*2  << endl;
    cout << "15 / 2 = " << 15/2.0  << endl; //Привидение в неявном виде
    cout << "15 / 2 = " << 15/(float)2  << endl; //Привидение в явном виде
    cout << "15 % 2 = " << 15%2  << endl;
    // cout << "15 % 2 = " << 15%2.0  << endl; Ошибка
    cout << "15 / 2 = " << (double)(15/2)  << endl; //()-Самый высокий приоритет
    //cout << "2147483647 + 2 = " << 2147483647 + 2  << endl; Переполнение
    cout << "2147483647 + 2 = " << (unsigned)2147483647 + 2  << endl; //Используем тип с большим количеством выделенных байтов
    // узнать количество выделенных байтов в типе можно с помощью sizeof
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(unsigned) = " << sizeof(unsigned) << endl;
    cout << "sizeof(float) = " << sizeof(5.69) << endl; // по умолчанию double
    cout << "sizeof(long double) = " << sizeof(long double) << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(bool) = " << sizeof(bool) << endl;
    cout << "sizeof(short) = " << sizeof(short) << endl;
    cout << "sizeof(long) = " << sizeof(long) << endl;
    //Узнать код символа можно с помощью приведения типа к int
    cout << "a = " << (int)'a' << endl;
    //Получить символ по коду
    cout << (char)98  << '=' << 98 << endl;
    //Константы числовых типов
    cout << "Константа начала диапазона для int = " << INT_MIN << endl;
    cout << "Константа конца диапазона для int = " << INT_MAX << endl;
    //Манипуляторы форматированного вывода
    // 1. setprecision(int) - общее количество выводимых знаков цифр/знаков
    cout << "Пример 1: " << endl;
    cout << "Пример double: " << setprecision(30) << 10 / 3.0 << endl;
    cout << "Пример float: " << setprecision(30) << 10 / 3.f << endl;
    // Точность для double 15 знаков после запятой а для float 7
    // 2. Комбинация setprecision(int) и setiosflags(ios::fixed) приводит к тому 
    // что setprecision(int) управляет количеством знаков после точки
    cout << "Пример 2: " << setiosflags(ios::fixed) << 1212.2312321312 * 12323.1231231 << endl;

    return 0;
}