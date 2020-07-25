#include "lapindrome.h"

#include<iostream>

using namespace std;

//lapindrome::lapindrome(int size = 10)
//{
//	pr_size = size;
//	//pr_cstr = new char[size];
//}
void lapindrome::setstring(char* cstr)
{
	int size=0;
	for (int i = 0; cstr[i] != '\0'; i++)
	{
		size++;
	}
	pr_size = size;
	pr_cstr = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		pr_cstr[i] = cstr[i];
	}
	pr_cstr[size -1] = '\0';
}

char* lapindrome::getstr()
{
	return pr_cstr;
}

lapindrome::~lapindrome()
{
	delete []pr_cstr;
	pr_cstr = nullptr;
}
