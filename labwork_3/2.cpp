#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x;
	string p = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free\ndeb http://security.debian.org/ stretch/updates main contrib non-free\ndeb-src http://security.debian.org/ stretch/updates main contrib non-free\ndeb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free\ndeb http://mirror.mephi.ru/debian stretch-backports main contrib non-free\ndeb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
	string v;
	string t ="mephi";
	string b ="yandex";
	x = p.size();
	for (int i = 0; i < x; i++) {
		if (p.substr(i, t.size()) == t)
			p.replace(i, t.size(), b);
		if (p[i] == 'm' && p[i + 1] == 'e' && p[i + 2] == 'p' && p[i + 3] == 'h' && p[i + 4] == 'i') {
			v += "yandex";
			i += 4;
			p.replace(i, i + 4, "yandex");
		} else {
			v += p[i];
		}
	}
	cout << p << endl;
	return 0;
}
