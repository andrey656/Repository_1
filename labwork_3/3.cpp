#include <iostream>
#include <string>
using namespace std;
int main()
{
	string d = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb http://security.debian.org/ stretch/updates main contrib non-free\ndeb-src http://security.debian.org/ stretch/updates main contrib non-free\ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
	int a = 0,
 c = 0,
 l = 0,
 o = 0,
 x =d.size();
	for (int i = 0; i < x; i++) {
		if (d[i] == ' ' || d[i] == '\n')
		++a;
		if (d[i] >= '0' && d[i] <= '9')
			++c;
		else if ((d[i] >= 'a' && d[i] <= 'z') || (d[i] >= 'A' && d[i] <= 'Z'))
			++l;
		else
			++o;
	}
	cout << "Побелы и символы новой строки: " << a << endl;
	cout << "Всего чисел: " << c << endl;
	cout << "Всего букв: " << l << endl;
	cout << "Остальных символов: " << o << endl;
	return 0;
}
