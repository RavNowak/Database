#pragma once
#include <stdexcept>

class InvalidPesel : public std::invalid_argument
{
public:
    InvalidPesel()
        : invalid_argument("Invalid PESEL !")
    {}
};

class InvalidGender : public std::invalid_argument
{
public:
    InvalidGender()
        : invalid_argument("Invalid gender !")
    {}
};

class InvalidFirstName : public std::invalid_argument
{
public:
    InvalidFirstName()
        : invalid_argument("Incorrect length or type of first name !")
    {}
};

class InvalidLastName : public std::invalid_argument
{
public:
    InvalidLastName()
        : invalid_argument("Incorrect length or type of last name !")
    {}
};

