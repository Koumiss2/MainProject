#include <iostream>
#include <cmath>
using namespace std;

int f(int n){
    if (n == 0 || n == 1) return 1;
    else return n * f(n-1);
}

double def(double x, int n)
{
    return pow(x, 2*n+1)/f(2*n+1);
}
int main() {
    double z, Sum;
    int N;
    cin >> N;
    cin >> z;
    for (int  i = 1; i <= N; i++){
        Sum += def(z, i);
    }
    cout << "Answer: " << Sum;

    return 0;
}
