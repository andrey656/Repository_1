#include <iostream>
using namespace std;
int main()
{
	int n,i;
	double sum=0;
	cout<<"n=";
	cin>>n;
	double* a = new double[n];
	cout<<"Введите числа:\n";
	for(i=0; i<n; i++) {
		cin>>a[i];
	}
	for(i=0; i<n; i++) {
		sum+=a[i];
	}
	cout<<"\nСреднее арифметическое чисел из заданной последовательности="<<sum/n;
	delete[] a;
	return 0;
}