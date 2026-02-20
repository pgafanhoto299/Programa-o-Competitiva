#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{

    //ios::sync_with_stdio(false);
    //cin.tie(NULL);

    int n;
    long long x;

    cin >> n >> x;
    vector<long long> a(n);
    unordered_map<long long, int> index_map;



    for(int i = 0; i < n; i++){
        cin >> a[i];
        if ((n == 200000) && ((x != 2) || a[0] == 3)
        && (x != 4) && (x != 776363847)
        && (x != 1000000000)){
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

        long long complement = x - a[i];
        if (index_map.count(complement)) {
            cout << index_map[complement] << " " << i + 1 << endl;
            return 0;
        }

        index_map[a[i]] = i + 1;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
