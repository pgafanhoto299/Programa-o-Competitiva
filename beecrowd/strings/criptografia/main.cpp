#include <iostream>
#include <string>
#include <algorithm> // reverse

using namespace std;

int main(){
    int n;

    cin >> n;
    cin.ignore();

    while(n--){
        string teste;
        getline(cin, teste);

        // 1º Passo
        for(int i = 0; i < teste.length(); i++){
            if(isalpha(teste[i]))
                teste[i] = teste[i] + 3;
        }
        // 2º Passo
        reverse(teste.begin(), teste.end());

        // 3º Passo
        int tam = teste.length() / 2;
        //cout << tam << endl;
        for(int i = tam; i < teste.length(); i++){
            teste[i] = teste[i] - 1;
        }
        cout << teste << endl;
        //teste.resize(0);
    }


}
