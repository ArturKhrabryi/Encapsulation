#pragma once


class BankAccount
{
private:
    long balance = 0;

public:
    bool deposit(long majorUnits, long minorUnits = 0)
    {
        bool isPositive = majorUnits >= 0 && minorUnits >= 0;
        if (!isPositive || minorUnits >= 100)
            return false;

        this->balance += majorUnits * 100 + minorUnits;

        return true;
    }

    bool withdraw(long majorUnits, long minorUnits = 0)
    {
        bool isPositive = majorUnits >= 0 && minorUnits >= 0;
        if (!isPositive || minorUnits >= 100)
            return false;

        long amount = majorUnits * 100 + minorUnits;
       
        if (amount > this->balance)
           return false;

        this->balance -= majorUnits * 100 + minorUnits;

        return true;
    }

    double getBalance() const
    {
        return this->balance / 100.0;
    }
};
