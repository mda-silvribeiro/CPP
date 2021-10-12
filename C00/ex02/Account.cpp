#include "Account.hpp"
#include <iostream>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created" << std::endl;

    return ;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t		timestamp;
	char		buff[16];

	time(&timestamp);
	strftime(buff, sizeof(buff), "%Y%m%d_%H%M%S", localtime(&timestamp));

	std::cout << "[" << buff << "]";
}


int	Account::getNbAccounts( void ){
    return _nbAccounts;
}

int	Account::getTotalAmount( void ){
    return _totalAmount;
}

int	Account::getNbDeposits( void ){
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){

    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:"<< getNbWithdrawals() << std::endl;

}

void	Account::makeDeposit( int deposit ){

    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;

    _totalNbDeposits += 1;
    _nbDeposits += 1;
    _amount += deposit;
    _totalAmount += deposit;

    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
    
}

bool	Account::makeWithdrawal( int withdrawal ){

    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    if (Account::checkAmount() < withdrawal)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (0);
    }
    else
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals += 1;
        _nbWithdrawals += 1;
        std::cout << ";withdrawal:" << withdrawal;
        std::cout << ";amount" << _amount;
        std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    return (1);
}

int		Account::checkAmount( void ) const {
    return _amount;
}

void	Account::displayStatus( void ) const{

    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:"<< _nbWithdrawals << std::endl;
}