#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <string>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts += 1;
    Account::_totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

int Account::getNbAccounts()
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount()
{
    return Account::_totalAmount;
}

int Account::getNbDeposits()
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
    time_t tt;
    time(&tt);
    char buffer[18];
    tm TM = *localtime(&tt);
    std::strftime(buffer, 18, "[%Y%m%d_%H%M%S]", &TM);
    std::cout << buffer;
}

void Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:"<< this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
    this->_amount += deposit;
    _totalNbDeposits++;
    _totalAmount = _totalAmount + deposit;
}

bool Account::makeWithdrawal(int withdrawl)
{
    if (this->_amount < withdrawl)
    {
        _displayTimestamp();
        std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
        return false;
    }
    _nbWithdrawals++;
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawl << ";amount:" << this->_amount - withdrawl << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    _totalAmount = _totalAmount - withdrawl;
    _amount -= withdrawl;
    _totalNbWithdrawals++;
    return true;
}

int Account::checkAmount() const
{
    return _amount;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
