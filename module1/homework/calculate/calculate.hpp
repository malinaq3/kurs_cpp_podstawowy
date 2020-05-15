#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {

if (command == "add"){

    int result = first + second;
    std::string str = std::to_string(result);
    return(str);

} else if (command == "subtract"){
    
    int result = first - second;
    std::string str = std::to_string(result);
    return(str);

} else if (command == "multiply"){

    int result = first * second;
    std::string str = std::to_string(result);
    return(str);  

} else if (command == "divide"){

    if (second == 0) {

        return "Division by 0";
    } else {

    int result = first / second;
    std::string str = std::to_string(result);
    return(str);  
    }

} else 
    return "Invalid data";
}
