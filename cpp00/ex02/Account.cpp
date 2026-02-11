/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruiz-d <anruiz-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:16:12 by anruiz-d          #+#    #+#             */
/*   Updated: 2026/02/08 15:21:56 by anruiz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

//definendo los static
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//constructor
Account::Account(int initial_deposit)
		: _accountIndex(_nbAccounts), 
		  _amount(initial_deposit),
		  _nbDeposits(0),
		  _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout	<< " index:" << YELLOW << _accountIndex << RESET
				<< ";amount:" << YELLOW <<_amount << RESET
				<< ";create" << std::endl;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}

//Destructor
Account::~Account()
{
	_displayTimestamp();
	std::cout	<< " index:" << YELLOW <<_accountIndex << RESET
				<< ";amount:" << YELLOW <<_amount << RESET
				<< ";closed" << std::endl;
}

// definiendo los getters para devolver los contadores globales
int Account::getNbAccounts(void){return _nbAccounts;}
int	Account::getTotalAmount(void) {return _totalAmount;}
int	Account::getNbDeposits(void){return _totalNbDeposits;}
int	Account::getNbWithdrawals(void){return _totalNbWithdrawals;}

void Account::_displayTimestamp(void)
{
	std::time_t	tme = time(0);
	std::tm	*ltm = localtime(&tme);
	std::cout << "[" << std::setw(4) << std::setfill('0') << ltm->tm_year + 1900
					 <<	std::setw(2) << std::setfill('0') << ltm->tm_mon
					 << std::setw(2) << std::setfill('0') << ltm->tm_mday 
					 << "_"
					 <<	std::setw(2) << std::setfill('0') << ltm->tm_hour
					 <<	std::setw(2) << std::setfill('0') << ltm->tm_min
					 <<	std::setw(2) << std::setfill('0') << ltm->tm_sec
					 << "]";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout	<< " Accounts:"	 <<	YELLOW <<_nbAccounts << RESET
				<<	";Total:"	 << YELLOW <<_totalAmount << RESET
				<<	";deposits:" << YELLOW << _totalNbDeposits << RESET
				<<	";withdrawals:" << YELLOW <<_totalNbWithdrawals << RESET 
	<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int p_amount;

	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	
	_displayTimestamp();
	std::cout	<< " index:" << YELLOW <<_accountIndex << RESET
				<< ";p_amount:" << YELLOW << p_amount << RESET
				<< ";deposit:" << YELLOW << deposit << RESET
				<< ";amount:" << YELLOW << _amount << RESET
				<< ";nb_deposits:" << YELLOW << _nbDeposits << RESET
	<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount = _amount;

	_displayTimestamp();
	std::cout	<< " index:" << YELLOW <<_accountIndex << RESET << ";";
	if (withdrawal > _amount)
	{
		std::cout	<< "p_amount:"  << YELLOW << p_amount << RESET
					<< ";withdrawal:refused"<< std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout
				<< ";p_amount:"  << YELLOW << p_amount << RESET
				<< "withdrawal:" << YELLOW << withdrawal << RESET
				<< ";amount:" << YELLOW << _amount << RESET
				<< ";nb_withdrawals:" << YELLOW << _nbWithdrawals << RESET
	<< std::endl;
	return true;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
		_displayTimestamp();
	std::cout	<< " index:" << YELLOW <<_accountIndex << RESET
				<< ";amount:" << YELLOW <<_amount << RESET
				<< ";deposits:" << YELLOW << _nbDeposits << RESET
				<< ";withdrawals:" << YELLOW << _nbWithdrawals << RESET
	<< std::endl;
}