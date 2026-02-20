#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, T;

    cin >> N >> T ;

    vector<int> row(N, 0), col(N, 0);
    int diag_p = 0, diag_seg = 0;

    for(int turn = 1; turn <= T; turn++){
        int a;

        cin >> a;
        int r = (a - 1) / N;
        int c = (a - 1) % N;

        row[r]++;
        col[c]++;

        if(r==c) diag_p++;
        if(r + c == N - 1) diag_seg++;

        if(row[r] == N){
            cout << turn << endl;
            return 0;
        }
        if(col[c] == N){
            cout << turn << endl;
            return 0;
        }
        if(diag_p == N){
            cout << turn << endl;
            return 0;
        }
        if(diag_seg == N){
            cout << turn << endl;
        }
    }
    cout << -1 << endl;
    return 0;

}
