#include "validation.hpp"

#include<iostream>

std::string getErrorMessage(ErrorCode) {
    return " ";
}

bool doesPasswordsMatch(const std::string& lhs, const std::string& rhs) {
    return true;
}

ErrorCode checkPasswordRules(std::string str) {
    ErrorCode num;
    num = Ok;
    return num;
    }

ErrorCode checkPassword(const std::string& lhs, const std::string& rhs) {
    ErrorCode num;
    num = Ok;
    return num;
}
