#pragma once
class lapindrome
{
	private:
		int pr_size;
		char* pr_cstr;
	public:
		//lapindrome(int size=10);
		void setstring(char* cstr);
		char* getstr();
		//void checkLapindrome();
		~lapindrome();
};

