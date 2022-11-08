#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int Account::getNbAccounts() {
    return _nbAccounts;
}

int Account::getTotalAmount() {
    return _totalAmount;
}

int Account::getNbDeposits() {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals() {
    return _totalNbWithdrawals;
}

void Account::_displayTimestamp() {
    time_t now = time(0);
    tm *time = localtime(&now);
    std::cout << "[" << time->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2) << time->tm_mon + 1;
    std::cout << std::setfill('0') << std::setw(2) << time->tm_mday << "_";
    std::cout << std::setfill('0') << std::setw(2) << time->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << time->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << time->tm_sec << "] ";
    return;
}

void Account::displayAccountsInfos() {
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
        << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    return;
}

Account::Account(int initial_deposit) :
        _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    return;
}

Account::~Account() {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    return;
}

void Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";";
    _amount += deposit;
    _nbDeposits += 1;
    _totalAmount += deposit;
    _totalNbDeposits += 1;
    std::cout << "deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits
        << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";";
    if(withdrawal <= _amount) {
        _totalAmount -= withdrawal;
        _totalNbWithdrawals += 1;
        _amount -= withdrawal;
        _nbWithdrawals += 1;
        std::cout << "withdrawal:" << withdrawal << ";amount" << _amount << ";nb_withdrawals:"
            << _nbWithdrawals << std::endl;
        return true;
    }
    std::cout << "withdrawal:refused" << std::endl;
    return false;
}

int Account::checkAmount() const {
    return (this->_amount);
}

void Account::displayStatus() const {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
        << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account() {
    return;
}






