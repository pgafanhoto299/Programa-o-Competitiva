#include <iostream>

using namespace std;

int main()
{
    int t, x, y;

    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> x >> y;

        if ((x <= 10) && (x >= 1) && (y <= 10) && (y >= 1)){
            if (x >= y)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }

    }
    return 0;
}
