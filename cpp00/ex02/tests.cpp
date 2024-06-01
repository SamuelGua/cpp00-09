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

static int	_nbAccounts = 0;
static int	_totalAmount = 0;
static int	_totalNbDeposits = 0;
static int	_totalNbWithdrawals = 0;


int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return(Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << ";";
}

Account::Account(int initial_deposit)
{
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
	std::cout << "created" << _accountIndex << std::endl;

	return;
}
Account::~Account(void)
{
	return;
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits +=1;
}
bool Account::makeWithdrawal(int withdrawal)
{
	if (_amount < withdrawal)
		return (false);
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	this->_totalNbWithdrawals +=1;
	return (true);
}

int Account::checkAmount(void) const
{
	return(this->_amount);
}
void Account::displayStatus(void) const
{
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << this->_totalNbDeposits << ";";
	std::cout << "amount:" << this->_totalAmount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << ";" << std::endl;
	
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
