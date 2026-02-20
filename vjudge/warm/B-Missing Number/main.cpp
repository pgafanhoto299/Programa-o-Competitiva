#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;

    cin >> n;
    vector<long long> arr(n-1);

    for(int i = 0; i < n -1; i++){
        cin >> arr[i];
    }

    long long s = (n * (n + 1)) / 2;

    for(int i = 0; i < n-1; i++){
        s -= arr[i];
    }

    cout << s << endl;
}
