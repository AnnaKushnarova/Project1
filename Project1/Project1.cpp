#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
    double x, y;
    bool res;
    SetConsoleOutputCP(1251);
    cout << "������ x-->";
    cin >> x;
    cout << "x=" << x << endl;
    cout << "������ y-->";
    cin >> y;
    cout << "y=" << y << endl;
    res = (x * x + y * y <= 25) && (y >= x - 5) && (y <= -x + 5);
    cout << "���������:" << res;
    return 0;
}
