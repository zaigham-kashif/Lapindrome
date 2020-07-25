#include"lapindrome.h"
#include<iostream>

using namespace std;

char* allocate();

int main()
{
	char* str1 = allocate();
	lapindrome l1;
	l1.setstring(str1);
	cout << l1.getstr() << endl;
}

char* allocate()
{
	int size=0;
	char str[100];
	cout << "	Enter string : ";
	cin.getline(str, 100);
	for (int i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	char* cstr = new char[size + 1];
	cstr[size + 1] = '\0';
	for (int i = 0; i < size; i++)
	{
		cstr[i] = str[i];
	}
	return cstr;
}