#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	const int m = 10;
	int a[m];
	cout << "Введите элементы массива:" << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		if (a[i] % 2 == 0)
			a[i] = 0;
	}
	cout << "Полученный массив:" << endl;
	for (int i = 0; i < m; i++)
		cout << setw(2) << a[i] << " ";
	system("pause");
	return 0;
}