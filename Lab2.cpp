#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	int max, a, n;
	int s = 1;
	int j = 1;
	int i = 2;
	setlocale(LC_ALL, "Rus");
	cout << "����������: ";
	do
	{
		cin >> n;

	} while (n<0);

	cout << "������� �����: ";
	cin >> a;
	max = a;
	while (i <= n)
	{
		cout << "������� �����: ";
		cin >> a;
		if (max < a)
		{
			max = a;
			j = i;
			s = 1;
		}
		else
		{
			if (max == a)
			{
				s += 1;
			}
		}
		i += 1;
	}
	cout << "Max = " << max << endl;
	cout << "����������: " << s << endl;
	cout << "�: " << j << endl;
	return 0;
}


