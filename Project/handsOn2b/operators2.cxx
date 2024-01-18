#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;

    cout << "Type x,y: ";
    cin >> x >> y;
    if (x == 0)
    {
        printf("x shouldnt be zero");
        exit(-1);
    }

    cout << "x + y - = " << ((x + y - y * x) / x) % y << endl;
    cout << " ++ y = " << ++y << endl;
    cout << " -- y = " << --y << endl;
    cout << " y -- = " << y-- << endl;
    cout << " y ++ = " << y++ << endl;
    x = 7;
    y = 7;
    printf(" x=%d  y=%d and boolean y && x = %d ", x, y, x && y);
    // etc....
}
