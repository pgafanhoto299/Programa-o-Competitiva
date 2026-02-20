#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long max_n = 2*pow(10, 5), n, num, k = 0, cont = 0;
    vector<long long> soma(max_n);

        for(k; k <= max_n; k++){

            if(k >= 10){
                long long j = k;
                while(j > 1){
                    if(cont == 0)
                        continue;
                    soma[cont] +=  j % 10 + soma[cont-1];
                    j = j / 10;
                }
                if(j == 1)
                    soma[cont] += 1;
            }else{
                soma[cont] += k + soma[cont-1];
            }
        cont++;
        }

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;

        cout << soma[num-1] << endl;
    }


    return 0;
}
