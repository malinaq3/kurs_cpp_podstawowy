#pragma once

#include<string>

enum ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoesNotMatch
};
std::string getErrorMessage(int);
bool doesPasswordsMatch(const std::string& lhs, const std::string& rhs);
ErrorCode checkPasswordRules(std::string str);
int checkPassword(const std::string& lhs, const std::string& rhs);
