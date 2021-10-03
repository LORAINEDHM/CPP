/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:56:26 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/03 23:24:50 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

	this->_accountIndex = Account::_nbAccounts++;
	std::cout << "index:" << this->_accountIndex
			<< ";amont:" << initial_deposit
			<< ";created" << std::endl;
	Account::_totalAmount += this->_amount;
}

Account::~Account( void ) {

	///std::reverse(myvector.begin(),myvector.end());
	std::cout << "index:" << this->_accountIndex
			<< ";amont:" << this->_amount
			<< ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) {

	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {

	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {

	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {

	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {

	std::cout << "accounts:" << Account::getNbAccounts()
			<< ";total:" << Account::getTotalAmount()
			<< ";deposits:" << Account::getNbDeposits()
			<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ) {

	std::cout << "index:" << this->_accountIndex
			<< ";p_amont:" << this->_amount
			<< ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amont:" << this->_amount
			<< "nb_deposits:1" << std::endl;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
}

int		Account::checkAmount( void ) const {

	if (this->_amount < 0)
		return (0);
	return (1);
}


bool	Account::makeWithdrawal( int withdrawal ) {

	std::cout << "index:" << this->_accountIndex
			<< ";p_amont:" << this->_amount;
	this->_amount -= withdrawal;
	if (!(Account::checkAmount())) {
		this->_amount += withdrawal;
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else {
		std::cout << ";deposit:" << withdrawal
				<< ";amont:" << this->_amount
				<< ";nb_withdrawals:1" << std::endl;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
	}
	return (true);
}

void	Account::displayStatus( void ) const {

	std::cout << "index:" << this->_accountIndex
			<< ";amont:" << this->_amount
			<< ";deposits:" << this->_nbDeposits
			<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}