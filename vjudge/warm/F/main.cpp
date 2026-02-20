#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    stack<int> stk;

    for (int i = 0; i < n; i++) {
        int curr = a[i];
        while (!stk.empty() && stk.top() == curr) {
            stk.pop();
            curr++; // faz a fusão
        }
        stk.push(curr);
    }

    cout << stk.size() << "\n";
}
