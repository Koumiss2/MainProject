#include <iostream>
#include <cmath>
using namespace std;
int F(int n){
    if (n <= 2) return 1;
    else return F(n-1) + F(n-2);
}
int main() {
    int N;
    cin >> N;
    cout << F(N) << endl;
    return 0;
}
