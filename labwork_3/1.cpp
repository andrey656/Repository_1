#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
using namespace std;
int main()
{
	int num;
	cout<<"Введите число от 1 до 100: ";
	cin>>num;
	string p = "В караване был X верблюд";
	string k="был";
	string l="верблюд";
	string t = ("X");
	if (num == 1 || (num > 20 && num % 10 == 1)) {
		locale loc("ru_RU.UTF-8");
		wstring_convert<codecvt_utf8<wchar_t>, wchar_t> codec;
		p.replace(p.find(t), t.length(),to_string(num));
		wstring wp = codec.from_bytes(p);
		p = codec.to_bytes(wp);
		cout<<p<<endl;
	}
	if ( (num > 1 && num < 5) || ((num > 20) && (num % 10) > 1 && (num % 10) < 5)) {
		locale loc("ru_RU.UTF-8");
		wstring_convert<codecvt_utf8<wchar_t>, wchar_t> codec;
		p.replace(p.find(k), k.length(),"было");
		p.replace(p.find(l), l.length(),"верблюда");
		p.replace(p.find(t), t.length(),to_string(num));
		wstring wp = codec.from_bytes(p);
		p = codec.to_bytes(wp);
		cout<<p<<endl;
	}
	 else if (num==0||(num>4&&num<21)||((num%10)>4)||(num%10==0)){
		locale loc("ru_RU.UTF-8");
		wstring_convert<codecvt_utf8<wchar_t>, wchar_t> codec;
		p.replace(p.find(k), k.length(),"было");
		p.replace(p.find(l), l.length(),"верблюдов");
		p.replace(p.find(t), t.length(),to_string(num));
		wstring wp = codec.from_bytes(p);
		p = codec.to_bytes(wp);
		cout<<p<<endl;
	}
	return 0;
}
