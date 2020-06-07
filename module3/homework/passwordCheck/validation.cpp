#include "validation.hpp"

#include<algorithm>

std::string getErrorMessage(const ErrorCode error) {
    switch (error) {
    case 0:
        return "OK";
        break;
    case 1:
        return "Password Needs At Least Nine Characters";
        break;
    case 2:
        return "Password Needs At Least One Number";
        break;
    case 3:
        return "Password Needs At Least One Special Character";
        break;
    case 4:
        return "Password Needs At Least One Uppercase Letter";
        break;
    case 5:
        return "Passwords Does Not Match";
        break;
    }
return {};
}

bool doesPasswordsMatch(const std::string& lhs, const std::string& rhs) {
    if (lhs.size() != rhs.size()) {
        return false;
    }

    for(int i=0; i<lhs.length(); i++) {
        if (lhs[i] != rhs[i]) {
            return false;
        }
    }
        return true;
}

ErrorCode checkPasswordRules(const std::string& str) {
    if (str.length() < 9) {
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
