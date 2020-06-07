#include "validation.hpp"

#include<iostream>

std::string getErrorMessage(int num) {
    switch (num) {
    case 0:
        return "Ok";
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
return 0;
}

bool doesPasswordsMatch(const std::string& lhs, const std::string& rhs) {
    if (lhs.size() != rhs.size())   return false;
    for(int i=0; i<lhs.length(); i++) {
            if (lhs[i] != rhs[i]) {
                return false;
            }
    }
        return true;
}

ErrorCode checkPasswordRules(std::string str) {
    ErrorCode num;
    num = Ok;
    return num;
    }

int checkPassword(const std::string& lhs, const std::string& rhs) {
    auto num = doesPasswordsMatch(lhs, rhs);
    if (!num) {
        return PasswordsDoesNotMatch;
    }    
    return Ok;
    
}
