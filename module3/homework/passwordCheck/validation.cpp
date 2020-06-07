#include "validation.hpp"

#include<algorithm>

std::string getErrorMessage(const ErrorCode error) {
    switch (error) {
    case Ok:
        return "OK";
        break;
    case PasswordNeedsAtLeastNineCharacters:
        return "Password Needs At Least Nine Characters";
        break;
    case PasswordNeedsAtLeastOneNumber:
        return "Password Needs At Least One Number";
        break;
    case PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password Needs At Least One Special Character";
        break;
    case PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password Needs At Least One Uppercase Letter";
        break;
    case PasswordsDoesNotMatch:
        return "Passwords Does Not Match";
        break;
    }
return "Unknown error code";
}

bool doesPasswordsMatch(const std::string& lhs, const std::string& rhs) {
    return lhs == rhs;
}

ErrorCode checkPasswordRules(const std::string& str) {
    if (str.length() < MinPassLength) {
        return PasswordNeedsAtLeastNineCharacters;
    }

    else if (std::none_of(str.begin(), str.end(), ::isdigit)) {        
        return PasswordNeedsAtLeastOneNumber;
    }

    else if (std::all_of(str.begin(), str.end(), ::isalnum)) {
        return PasswordNeedsAtLeastOneSpecialCharacter;
    }

    else if (std::none_of(str.begin(), str.end(), ::isupper)) {
        return PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return Ok;
}

ErrorCode checkPassword(const std::string& lhs, const std::string& rhs) {
    if (!doesPasswordsMatch(lhs, rhs)) {
        return PasswordsDoesNotMatch;
    }    
    
    return checkPasswordRules(lhs);
}
