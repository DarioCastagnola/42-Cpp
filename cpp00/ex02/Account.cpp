/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:45:53 by dcastagn          #+#    #+#             */
/*   Updated: 2023/08/25 14:24:17 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <cstring>
#include <iomanip>
#include <string>
#include <locale>
#include <ctime>


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	static int	i;

	this->_accountIndex = i;
	i++;
	this->_nbDeposits = 0;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts = i;
	Account::_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";created" << std::endl;
	return ;
}

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}
void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " accounts:"
        << getNbAccounts()
        << ";total:"
        << getTotalAmount()
        << ";deposits:"
        << getNbDeposits()
        << ";withdrawals:"
        << getNbWithdrawals()
        << std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::time_t t = std::time(0);   // get time now
	std::tm* now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900);
    if (now->tm_mon < 10)
        std::cout << "0";
    std::cout << (now->tm_mon + 1)
        << now->tm_mday
        << "_"
        << now->tm_hour
        << now->tm_min
        << now->tm_sec
        << "]";
	//std::cout << "[19920104_091532]";
	return ;
}

void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits += 1;
	Account::_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (this->checkAmount() < withdrawal)
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->checkAmount();
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
    this->_nbWithdrawals += 1;
    Account::_totalNbWithdrawals++;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
    int amount;

    amount = this->_amount;
    return (amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << " index:";
    std::cout << this->_accountIndex;
    std::cout << ";amount:";
    std::cout << this->_amount;
    std::cout << ";deposits:";
    std::cout << this->_nbDeposits;
    std::cout << ";withdrawals:";
    std::cout << this->_nbWithdrawals;
    std::cout << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << " index:"
        << this->_accountIndex
        << ";amount:"
        << this->_amount
        << ";closed"
        << std::endl;
}