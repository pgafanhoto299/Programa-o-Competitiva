#include <iostream>

using namespace std;

int main()
{
    int t, n, x;

    cin >> t;
    if ((t <= 200) && (t >= 1)){
        for (int i = 1; i <= t; i++){

            cin >> n >> x;

            if ((x >= 1) & (x <= n) & (n <= 20))
                cout << n - x << endl;
        }
    }
    return 0;
}
