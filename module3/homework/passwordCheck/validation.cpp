#include "validation.hpp"

#include<iostream>
#include<ctime>

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

ErrorCode checkPasswordRules(const std::string& str) {
    std::srand(std::time(nullptr));
    ErrorCode num = static_cast<ErrorCode>(rand() % 4);
    return num;
    }

ErrorCode checkPassword(const std::string& lhs, const std::string& rhs) {
    auto num = doesPasswordsMatch(lhs, rhs);
    if (!num) {
        return PasswordsDoesNotMatch;
    }    
    auto rule = checkPasswordRules(lhs);
    return rule;
    
}
