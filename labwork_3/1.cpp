#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main()
{
	int num;
	cout<<"Введите число от 1 до 100: ";
	cin>>num;
	locale loc("ru_RU.UTF-8");
	string p = "В караване был" ;
	string s = " верблюд";
	if (num == 1 || (num > 20 && num % 10 == 1)) {
		p.append(" ");
		cout<<p;
		cout<<num;
		cout<<s<<endl;
	} else if ( (num > 1 && num < 5) || ((num > 20) && (num % 10) > 1 && (num % 10) < 5)) {
		p.append("о ");
		s.append("а ");
		cout<<p;
		cout<< num;
		cout<<s<<endl;
	} else  {
		p.append("о ");
		s.append("ов");
		cout<<p;
		cout<< num;
		cout<<s<<endl;

	}
}
