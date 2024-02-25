#include <iostream>
#include <cmath>
using namespace std;

int NOD(int a, int b){
    if (a%b ==0 || b%a==0) return min(a, b);
    else{
        if (a > b) return NOD(b, a%b);
        else return NOD(a, b%a);
    }
}

template <typename T1, typename T2>

T1 NOD(T1 a, T2 b){
    if (a == b) return a;
    if (a < b) return NOD(a, b-a);
    else return NOD(a-b, b);
}
int main() {
    int n1, n2;
    double dn1, dn2;
    cin >> n1 >> n2;
    cout << n1*n2/NOD(n1, n2);
    cout << endl;
    cin >> dn1 >> dn2;
    cout << n1*n2/NOD(dn1, dn2);
    return 0;
}
