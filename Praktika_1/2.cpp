#include <iostream>
using namespace std;

void normirovka(double a[], int len)
{
	cout << "Введите значения массива: " << endl;
	for(int i=0; i<len; i++) {
		cin >> a[i];
	}
	double max = a[0], min = a[0];
	for (int i = 0; i < len; i++) {
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	for (int j = 0; j <len; j++) {
		a[j] = (a[j] - min)/(max - min);
	}
	cout << "MAX : " << max << endl;
	cout << "MIN : " << min ;
	cout << " " << endl;
}

int main()
{
	int S;
	cout << "Введите размер массива: ";
	cin >> S;
	double *A = new double [S];
	normirovka(A, S);
	for(int i=0; i<S; i++) {
		cout << A[i] << endl;
	}
	delete[] A;
	return 0;
}