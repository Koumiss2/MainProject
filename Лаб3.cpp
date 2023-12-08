#include <iostream>
using namespace std;
int main()
{
    double s = 0;
    int n;
    int i = 1;
    double x;
    double u=1;
    setlocale(LC_ALL, "ru");
    cin >> n;
    cin >> x;
    while (i <= n)
    {
        s = s + u;
        u = u * x / i;
        i += 1;
    }
    cout << s;
	return 0;
}
