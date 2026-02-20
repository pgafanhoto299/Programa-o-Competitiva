#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;



    cin >> n;

    vector<int> t(n);
    string s;

    for(int i = 0; i < n; i++){
        cin >> t[i];
        cin >> s;

        for(int j = 0; j < t[i]; j++){
            cout << s[j];
            if(s[j] == 'a' || s[j] == 'e'){
                if((s[j-1] == 'b' || s[j-1] == 'c' || s[j-1] == 'd')
                    && (s[j+1] == 'b' || s[j+1] == 'c' || s[j+1] == 'd')){
                    if(s[j+2] == 'b' || s[j+2] == 'c' || s[j+2] == 'd'){
                        j++;
                        cout << s[j] << ".";
                    }else if(j + 2 != t[i]){
                     cout << ".";
                    }
                }
            }
        }
        cout << "\n";
    }
}
