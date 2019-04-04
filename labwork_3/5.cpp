#include <iostream>
#include <locale>
using namespace std;
wstring decrypt(const wstring text, const int key);
int main()
{
	
	locale loc("ru_RU.UTF-8");
	locale::global(loc);
	wstring wcod = L"абабаба"; 
	wstring wcod2 = L"", wdecod = L"", wdecod1 = L"";
	int key;
	wcout << L"Введите ключ:";
	cin >> key;
	for (wchar_t & wc: wcod) {
		if ((wc >= L'а' && wc <= L'я') || (wc >= L'А' && wc <= L'Я')) {
			wc = toupper(wc,loc);
			wcod2 += wc;
		}
	}
	
	wdecod1 = decrypt(wcod, key); 
	wcout << wdecod1 << endl;
	return 0;
}


wstring decrypt(const wstring text, const int key)
{
	int key1, i,s;
	wstring text1 = text;
	wstring str;
	wstring error = L"ОШИБКА";
	s=text1.size();
	for (i = 0; i < s; i++)
		if (text1[i] >= L'А' && text1[i] <= L'Я')
			continue;
		else
			return error;
	if (key > 32) key1 = key % 32;
	else key1 = key;
	for (wchar_t & wc: text1) {
		if ((wc - key1) < L'А')
			str += wc - key1 + 32;
		else
			str += wc - key1;
	}
	return str;
}
