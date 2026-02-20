#include <iostream>
#include <vector>
#include <map>


using namespace std;

int main()
{
    int n;
    long long x;

    cin >> n >> x;
    vector<long long> a(n);
    map<long long, int> index_map;

    for(int i = 0; i < n; i++){
        cin >> a[i];

        long long complement = a[i];
        if (index_map.count(complement)){
            cout << index_map[complement] << " " << i + 1 << endl;
            return 0;
        }

        index_map[a[i]] = i;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
