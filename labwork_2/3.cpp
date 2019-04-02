#include <iostream>
using namespace std;
int main()
{

	int a, summ = 0;
	cout << "Введите последовательность:\n";
	cin >> a;
	while ( a != 0) {
		if (a > 0) {
			summ += a;
		}
		cin >> a;
	}
	cout << "Сумма положительных чисел:" << summ << endl;
	return 0;
}
