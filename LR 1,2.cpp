#include <iostream>
#include <string>
using namespace std;
void sim(char n) {
	do {
		cout << "Ввод символов" << endl;
		cin >> n;
	} while (!isalpha(n));
}
void str(string y, char n) {
	do {
		cout << "Ввод строки" << endl;
	} while (getline(cin, b));
	for (int i = 0; i < y[i] != &apos; \0 & apos;; i++) {
		if (y[i] == n) {
			cout << "Символ " << n << " стоит на - " << i + 1 << "месте";
		}
	}
}
int main()
{
	char n = &apos; 1 & apos;;
	string(y);
	setlocale(LC_ALL, "RU");
	sim(n);
	str(y, n);
	return 0;
	system("pause");
}