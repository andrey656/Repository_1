#include <iostream>
using namespace std;
double* normirovka(double* a, int len)
{
	double *c = new double[len];
	double max = a[0], min = a[0];
	for (int i = 0; i < len; i++) {
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	for (int j = 0; j < len; j++)
		c[j] = (a[j] - min) / (max - min);
	cout <<"c= " << c << endl;
	return c;
}
int main()
{
	int S ;
	cout<<"Введите размер массива:";
	cin>>S;
	double *a = new double[S];
	double *b = new double[S];
	cout << "Введите массив для нормировки значений:\n";
	for (int i = 0; i < S; i++) {
		cin >> a[i];
	}

	b = normirovka(a, S);
	cout <<"a= " << a << endl;
	cout <<"b= " << b << endl;
	cout << "Нормированный массив:\n";
	for (int i = 0; i < S; i++) {
		cout << b[i] << endl;
	}

	delete [] b;
	delete [] a;
	return 0;
}
