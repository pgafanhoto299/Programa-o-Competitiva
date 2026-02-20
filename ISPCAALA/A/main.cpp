#include <iostream>

using namespace std;

int main()
{
    int x;

    cin >> x;

    if ((x <= 20) & (x >= 1)){
        if(x > 11)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
