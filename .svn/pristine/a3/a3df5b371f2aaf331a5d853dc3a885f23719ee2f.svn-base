#include "Account.h"

namespace Accounting
{


	Account::Account()
	{
		sc = 'C';  // setting a signed char
		sc = -128; // houses double values as unsigned char
		uc = 'C';  // setting a unsigned char
		uc = 128;
		wc = L'c'; // Setting a wchar_t
		s = 32767;
		l = 0x7fffffff;
		ss = -6;
		us = -8;
	}

	Account::Account(double amount){
		balance = amount;
	}

	void Account::deposit(double amount){
		balance += amount;

	}

	void Account::withdraw(double amount){
		balance -= amount;
	}

	double Account::getBalance() const
	{
		return this->balance;
	}
}
