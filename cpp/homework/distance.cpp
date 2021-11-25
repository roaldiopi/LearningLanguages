#include <iostream>
//#include <conio.h> Заголовочный файл чтобы у windows пользователей  не закрывалось окно =)
using namespace std;

int main() {
    //Программа вычисления расстояния между населенными пунктами.
    double map_scale,distance_on_map;
    cout << "Вычисление расстояния между населенными пунктами." << endl;
    cout << "Введите исходные данные:" << endl;
    cout << "Масштаб карты (количество километров в одном сантиметре) :";
    cin >> map_scale;
    cout << "Расстояние между точками, изображающими населенные пункты (см) :";
    cin >> distance_on_map;
    cout << "Расстояние между населенными пунктами " << (distance_on_map * map_scale) << " км." << endl;
    // _getch();
    return 0;
}
