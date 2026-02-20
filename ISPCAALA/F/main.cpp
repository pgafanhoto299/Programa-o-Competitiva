#include <iostream>

using namespace std;

int main()
{
    int t, x;

    cin >> t;
    if((t <= 100) && t >= 1){
        for (int i = 1; i <= t; i++){
            cin >> x;
            if((x <= 100) && x >= 1)
                x <= 10 ? cout << "Yes" << endl : cout << "No" << endl;
        }
    }
    return 0;
}
