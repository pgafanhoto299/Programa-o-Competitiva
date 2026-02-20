#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N;
    cin >> N;

    vector <long long>A(N-1);
    long long final_point = 0;

    for(int i=0; i < N-1; i++){
        cin >> A[i];

        final_point -= A[i];
    }

    cout << final_point << endl;
    return 0;
}
