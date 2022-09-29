#pragma once
#include <exception>

struct StackOverflow : public std::exception {
    const char* what() const throw () {
        return "Exceptions StackOverflow ";
    }
};

struct StackUnderflow : public std::exception {
    const char* what() const throw () {
        return "Exceptions StackUnderflow ";
    }
};
