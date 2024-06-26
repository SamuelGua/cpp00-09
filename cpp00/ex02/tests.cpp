// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::time_t temps;
	std::tm *local;
	char buffer[20];

	temps = std::time(0);
	local = std::localtime(&temps);
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", local);
	std::cout << buffer << " ";
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	if (initial_deposit > 0)
	{
		_amount = initial_deposit;
		_totalAmount += _amount;
	}
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;

	return;
}
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
	return;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	if (deposit > 0)
	{
		_amount += deposit;
		_totalAmount += deposit;
		_nbDeposits = 1;
		_totalNbDeposits += 1;
	}
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;


}
bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (_amount >= withdrawal)
	{
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << _amount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals = 1;
		this->_totalNbWithdrawals += 1;
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	this->_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:refused" << std::endl;
	return (false);
}

int Account::checkAmount(void) const
{
	return(this->_amount);
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals  << std::endl;;
}

int main(void)
{

	typedef std::vector<Account::t> accounts_t;
	typedef std::vector<int> ints_t;
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	int const amounts[] = {42, 54, 957, 432, 1234, 0, 754, 16576};
	size_t const amounts_size(sizeof(amounts) / sizeof(int));
	accounts_t accounts(amounts, amounts + amounts_size);
	accounts_t::iterator acc_begin = accounts.begin();
	accounts_t::iterator acc_end = accounts.end();

	int const d[] = {5, 765, 564, 2, 87, 23, 9, 20};
	size_t const d_size(sizeof(d) / sizeof(int));
	ints_t deposits(d, d + d_size);
	ints_t::iterator dep_begin = deposits.begin();
	ints_t::iterator dep_end = deposits.end();

	int const w[] = {321, 34, 657, 4, 76, 275, 657, 7654};
	size_t const w_size(sizeof(w) / sizeof(int));
	ints_t withdrawals(w, w + w_size);
	ints_t::iterator wit_begin = withdrawals.begin();
	ints_t::iterator wit_end = withdrawals.end();

	Account::displayAccountsInfos();
	std::for_each(acc_begin, acc_end, std::mem_fun_ref(&Account::displayStatus));

	for (acc_int_t it(acc_begin, dep_begin);
		 it.first != acc_end && it.second != dep_end;
		 ++(it.first), ++(it.second))
	{

		(*(it.first)).makeDeposit(*(it.second));
	}

	Account::displayAccountsInfos();
	std::for_each(acc_begin, acc_end, std::mem_fun_ref(&Account::displayStatus));

	for (acc_int_t it(acc_begin, wit_begin);
		 it.first != acc_end && it.second != wit_end;
		 ++(it.first), ++(it.second))
	{

		(*(it.first)).makeWithdrawal(*(it.second));
	}

	Account::displayAccountsInfos();
	std::for_each(acc_begin, acc_end, std::mem_fun_ref(&Account::displayStatus));

	return 0;
}

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
