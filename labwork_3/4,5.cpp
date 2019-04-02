#include <iostream>
#include <locale>
using namespace std;
wstring encrypt(const wstring text, const int key);
wstring decrypt(const wstring text, const int key);
int main()
{
	
	locale loc("ru_RU.UTF-8");
	locale::global(loc);
	wstring wcod = L"арбуз"; 
	wstring wcod2 = L"", wdecod = L"", wdecod1 = L"";
	int key, x=wcod2.size();
	wcout << L"Введите ключ:";
	cin >> key;
	for (wchar_t & wc: wcod) {
		if ((wc >= L'а' && wc <= L'я') || (wc >= L'А' && wc <= L'Я')) {
			wc = toupper(wc,loc);
			wcod2 += wc;
		}
	}
	for (int i = 0; i < x; i++)
		if (wcod2[i] >= L'А' && wcod2[i] <= L'Я')
			continue;
		else {
			wcout << L"ОШИБКА\n";
			return 0;
		}
	if (wcod2 == L"") {
		wcout << L"ОШИБКА\n";
		return 0;
	}
	wcout << wcod2 << endl;
	wdecod = encrypt(wcod2, key); 
	wcout << wdecod << endl;
	wdecod1 = decrypt(wdecod, key); 
	wcout << wdecod1 << endl;
	return 0;
}
wstring encrypt(const wstring text, const int key)
{
	int key1;
	wstring text1 = text;
	wstring str;
	if (key > 32) key1 = key % 32;
	else key1 = key;
	for (wchar_t & wc: text1) {
		if ((wc + key1) > L'Я')
			str += wc + key1 - 32;
		else
			str += wc + key1;
	}
	return str;
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
