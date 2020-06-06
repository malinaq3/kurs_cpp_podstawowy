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
std::string getErrorMessage(enum ErrorCode);
bool doesPasswordsMatch(const std::string& lhs, const std::string& rhs);
ErrorCode checkPasswordRules(std::string str);
ErrorCode checkPassword(const std::string& lhs, const std::string& rhs);
