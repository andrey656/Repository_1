#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Введите число: ";
	    cin >> n;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) {
			cout << "Нет" <<endl;
			return 0;
		}
	}
	cout << "Да" <<endl;
	return 0;
}
