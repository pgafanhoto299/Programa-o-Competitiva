#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

typedef pair<ll, ll> Segment;

int main(){
    ll L, R;

    cin >> L >> R;

    vector <Segment> result;

    ll current = L;

    while(current < R){
        ll max_len = 1;
        for(int i = 0; i <= 60; i++){
            ll len = 1ULL << i;
            if(current % len == 0 && current +len <= R){
                max_len = len;
            }
        }
        result.emplace_back(current, current + max_len);
        current += max_len;
    }

    cout << result.size() << endl;
    for(auto[l, r] : result){
        cout << l << " " << r << endl;
    }
    return 0;
}
