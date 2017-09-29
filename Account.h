#ifndef ACCOUNT_H
#define ACCOUNT_H


#define NUMBER_MONTHS = 12
#define MIN(a,b) ((a) > (b) ? (a) : (b))

#define LOGGING

#ifdef LOGGING
#pragma message("Logging Enabled on")
#endif

namespace Accounting
{


	class Account
	{
	public:
		Account(double amount);
		Account();
		void 	deposit(double amount);
		void 	withdraw(double amount);
		double	getBalance() const;

	private:
		double	balance;
		char	months[12]; // declare array of 12 chars
		int		x;
		bool	boolean;
		char	c;
		signed char sc; // -128..128
		unsigned char uc;// 0..128
		wchar_t	wc;
		short s;
		long l;
		signed short ss;
		unsigned short us;


	}; // Notice that the end of a class is suffixed with a terminating ;
}
#endif
