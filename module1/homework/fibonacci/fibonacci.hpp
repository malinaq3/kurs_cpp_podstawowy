#pragma once
#include<iostream>

int fibonacci_iterative(int sequence) {



if (sequence < 0) {
        std::cout << "Liczba nie moze byc ujemna!";

} else if (sequence <= 1) {
        return(sequence);
}
    int num1 = 0, num2 = 1, temp;

for (size_t i=2; i <= sequence; i++){

    temp = num2;
    num2 += num1;
    num1 = temp;
}
    return (num2);
    
}

int fibonacci_recursive(int sequence) {

    if (sequence < 0) {
        std::cout << "Liczba nie moze byc ujemna!";
    } else if (sequence <= 1) {
        return(sequence);
    }
    return (fibonacci_recursive(sequence - 1) + (fibonacci_recursive(sequence - 2)));
}
