#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int n, cont = 0;

    cin >> n;
    vector<long long> a(n);
    map<long long, int> index_map;

    for(int i = 0; i < n; i++){
        cin >> a[i];

        long long complement = a[i];

        if(!index_map.count(complement)){
            cont += 1;
        }

        index_map[a[i]] = i;
    }

    cout << cont << endl;
    return 0;
}
