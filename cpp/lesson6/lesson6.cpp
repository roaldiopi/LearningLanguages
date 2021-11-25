#include <iostream>
#include <iomanip>
#include <cmath> // Подключение математической библиотеки
using namespace std;

int main() {
    cout << "Начало" << endl;
    // Прогграма вычисления дохода по вкладу
    // double summa, percent, gain;
    // int days;
    // cout << "Введите исходные данные:" << endl;
    // cout << "Величина вклада (дробное значение, леи) – ";
    // cin >> summa;
    // cout << "Срок вклада (дней) - ";
    // cin >> days;
    // cout << "Процентная ставка (годовых) - ";
    // cin >> percent;
    // gain = (summa * percent / 100) / 365 * days;
    // cout << setprecision(2) << setiosflags(ios::fixed);
    // cout << "Доход: " << gain << endl;
    // cout << "Сумма по окончании срока вклада: " << summa + gain << endl;
    // double summa;
    // int lei, bani;

    // cout << "Введи сумму в лея:";
    // cin >> summa;

    // lei = summa;
    // bani =  summa % 100;  ошибка т.к %  применим только к целым
    // bani = summa * 100 - lei * 100;

    // cout << summa << " = " << lei << " лей," <<bani << "бан" << endl;
    //Прогграма рассчитавает скорость бегуна
    // double dist,time,speed;
    // int seconds,minutes,total_seconds;
    // cout << "Введите длину дистанции (целое число, метры) ->";
    // cin >> dist;
    // cout << "Введите время (минут.секунд) ->";
    // cin >> time;
    // minutes = time;
    // seconds = (time - minutes) * 100;
    // total_seconds = minutes * 60 + seconds;
    // cout << "Время: "<< minutes << " мин "<< time <<" сек = "<< total_seconds <<" сек" << endl;
    // speed = (dist / (double)1000) / (total_seconds / (double)3600);
    // cout << "Вы бежали со скоростью "<< speed <<" км/час" << endl;
    // Прогграма рассчитает плошадь круга
    // double radius,area;
    // cout << "Введите радиус круга:";
    // cin >> radius;
    // area = M_PI * (radius * radius);
    // cout << "Площадь круга равна " << area << endl;
    // Прогграма для получения цифр числа
    //  int user_number,n1,n2,n3,n4;
    //  char sym;
    //  cout << "Введите число:";
    //  cin >> user_number;
    //  cout << "Введите символ разделения:";
    //  cin >> sym;
    //  n1 = user_number/1000;
    //  n2 = user_number%1000/100;
    //  n3 = user_number%100/10;
    //  n4 = user_number%10;
    //  cout << n1 << sym << n2 <<  sym << n3 << sym << n4;
    // Прогграма переварачивания числа
    // int user_number, n1, n2,reversed_number;
    // cout << "Введите двухзначное число:";
    // cin >> user_number;
    // n1 = user_number/10;
    // n2 = user_number%10;
    // reversed_number = n2 * 10 +n1;
    // cout << reversed_number;
    // Прогграма обменивает значения
    // int n1,n2,temp;
    // cout << "Введите два числа:";
    // cin >> n1 >> n2;
    // cout << "n1=" << n1 << ",n2="<<n2 << endl;
    // temp = n1;
    // n1=n2;
    // n2=temp;
    // cout << "n1=" << n1 << ",n2="<<n2  << endl;
    cout << "Конец" << endl;
    return 0;
}
