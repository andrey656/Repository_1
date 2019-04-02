#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
	cout<<"Введите последовательность: "<< endl;
    for (int n = ~0; n != 0; cin >> n) {
        if (n > 0) {
            sum += n;
        }
    }
    cout <<"Сумма положительных чисел: " <<sum << endl;
    return 0;
}


