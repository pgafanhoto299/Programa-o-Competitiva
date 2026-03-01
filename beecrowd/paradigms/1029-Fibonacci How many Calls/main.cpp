#include <iostream>

using namespace std;

void limpar(int (&result)[2]){
    result[0] = -1;
    result[1] = 0;
}
int fib(int n, int (&result)[2]){
    result[0] += 1;
    if (n == 0){
        return 0;
    }
    if (n == 1) {
        result[1] +=1;
        return 1;
        }
    if (n >= 2)
        return fib(n-1, result) + fib(n-2, result);

}
int main()
{
    int N, X;
    int result[] = {-1,0};

    cin >> N;
    while(N--){
        cin >> X;
        fib(X, result);
        cout << "fib(" << X << ")" << " = "
                << result[0] << " calls "
                    << "= " << result[1] << endl;
        limpar(result);
    }
    return 0;
}
