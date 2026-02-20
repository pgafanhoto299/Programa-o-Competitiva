#include <iostream>

using namespace std;

int main()
{
    int  x, y, t;

    cin >> t;

    if ((t <= 10) && (t >= 1)){
        for (int i = 1; i <= t; i++){
            cin >> x >> y;
            if((x >= 1) && (x < y) && (y <= 12))
                cout << y - x << endl;
        }
    }
    return 0;
}
