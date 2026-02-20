#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll X, K, D;

    cin >> X >> K >> D;


    if(K == 1){
        cout << abs(X - D) << endl;
        return 0;
    }
    ll cont  = K;
    while(cont--){
        if(X - D <= K - D){
            cout << abs(X - D) << endl;
            return 0;
        }else{
            cout << abs(K - D) << endl;
            return 0;
        }
    }
}
