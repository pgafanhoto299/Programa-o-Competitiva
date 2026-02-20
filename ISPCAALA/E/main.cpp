#include <iostream>

using namespace std;

int main()
{
    int t, x, y;

    cin >> t;
    if ((t <= 100) && (t >= 1)){
        for (int i = 1; i <= t; i++){

            cin >> x >> y;

            if ((y >= 1) && (y < x) && (x <= 100))
                cout << x - y << endl;
        }
    }
    return 0;
}
