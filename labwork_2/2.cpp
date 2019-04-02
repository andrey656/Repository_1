#include <iostream>
using namespace std;
int main()
{
	int s, a;
	cout <<"Искомое число: "<<endl;
	cin >>s;
	cout<<"Введите последовательность: "<< endl;
	cin >> a;
	while ( a != 0) {
		if (a ==s ) {
			cout<<"Число найдено:"<<s<< endl;
		}
		cin >> a;
	}
	return 0;
}