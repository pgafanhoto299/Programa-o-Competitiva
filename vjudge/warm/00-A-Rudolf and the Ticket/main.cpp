#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int t, n, m, k, cont;

    cin >> t;
    for(int i = 0; i < t; i++){
        cont = 0;
        if ((t >= 1) & (t <= 100)){
            cin >> n >> m >> k;
            vector <int> b(n);
            vector <int> c(m);
            if((n >= 1) & (n <= 100)
                &(m >= 1) & (m <= 100)
                &(k >= 1) & (k <= 2000))

                for (int i = 0; i < n; i++){
                    cin >> b[i];
                }
                for (int i = 0; i < m; i++){
                    cin >> c[i];
                }
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < m; j++){
                        if(b[i] + c[j] <= k)
                            cont += 1;
                    }
                }
        }
        cout << cont << endl;
    }

    return 0;
}
