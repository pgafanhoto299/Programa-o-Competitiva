#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    if ((x >= 1) & (x <= 7) & (y >= 1) & (y <= 7) & ((x + y) >= 1) & ((x + y) >= 1)){
            cout << 7 - (x + y) << endl;
        }
    return 0;
}
