#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int a[100];
	int n;
	int Num;
	int cnt = 1;
	srand(time(NULL));
	cin >> n;
	for(int i = 0; i < n; i++){
		a[i] = rand()%200-100;
	}
	int Max = a[0];
	for(int i = 1; i < n; i ++){
		if (a[i] > Max) {
		Max = a[i];
		Num = i+1;
		}
		else{
		if (a[i]==Max) {
            cnt++;
        }
		}
	}

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    cout << Max << endl;
	cout << Num << endl;
	cout << cnt;
}
