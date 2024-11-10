#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
    double x, y;
    bool res;
    SetConsoleOutputCP(1251);
    do
    {
        cout << "¬вед≥ть x-->";
        cin >> x;
        cout << "x=" << x << endl;
    } while (x < SHRT_MIN || x > SHRT_MAX);
    cout << "¬вед≥ть y-->";
    cin >> y;
    cout << "y=" << y << endl;
    res = (x * x + y * y <= 25) && (y >= x - 5) && (y <= -x + 5);
    cout << "–езультат:" << res;
    return 0;
}
