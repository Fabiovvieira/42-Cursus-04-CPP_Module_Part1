#include "Account.hpp"
#include <ctime>
#include <iostream>



//static key word create a non member atribute which can be access in any instance of class Account
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;



Account::Account(int initial_deposit) : _amount(initial_deposit){
	this->_accountIndex = this->getNbAccounts();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
};

Account::~Account(void) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "closed" << std::endl;
};


void	Account::_displayTimestamp(void) {
	char	buffer[100];

	// Get the current time
	std::time_t	currentTime = std::time(NULL);
	std::tm		*localTime = std::localtime(&currentTime);
	// Convert the time to a formated char*
	std::strftime (buffer, sizeof(buffer),"[%Y%m%d_%H%M%S] ",localTime);
	std::cout << buffer;
};


int	Account::getNbAccounts( void ){
	return (Account::_nbAccounts);
};

int	Account::getNbWithdrawals( void ){
	return (Account::_totalNbWithdrawals);
};

int	Account::getTotalAmount( void ){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (Account::_totalNbDeposits);
};

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawls:" << Account::getNbWithdrawals() << std::endl;
};

void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "deposits:" << Account::_nbDeposits << ";";
	std::cout << "withdrawls:" << Account::_nbWithdrawals << std::endl;
};

int	Account::checkAmount(void) const {
	return (this->_amount);
};

void	Account::makeDeposit( int deposit ){
	Account::_totalNbDeposits++;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	this->_amount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
};

bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	if (this->checkAmount() - withdrawal >= 0){
		Account::_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->checkAmount() << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
};