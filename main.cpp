#include <iostream>
#include "string"
using namespace std;

int Fib(int n){
    if (n <= 2){
        return 1;
    }
    else{
        return Fib(n-1) + Fib(n-2);
    }
}

int main(){
    cout << Fib(5);
    return 0;
}