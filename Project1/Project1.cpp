#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
//програму обчислення логічного виразу належності точки з заданими координатами (x, y) до заштрихованої області.
int main()
{
    double x, y;
    bool res;
    SetConsoleOutputCP(1251);
    do
    {
        cout << "Введіть x-->";
        cin >> x;
        cout << "x=" << x << endl;
    } while (x < SHRT_MIN || x > SHRT_MAX);
    cout << "Введіть y-->";
    cin >> y;
    cout << "y=" << y << endl;
    res = (x * x + y * y <= 25) && (y >= x - 5) && (y <= -x + 5);
    cout << "Результат:" << res;
    return 0;
}
