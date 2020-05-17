#pragma once
#include<iostream>

int fibonacci_iterative(int sequence) {


int tab[100];
if (sequence < 0) {
        std::cout << "Liczba nie moze byc ujemna!";

} else if (sequence <= 1) {
        return(sequence);
}
for (size_t i=2; i <= sequence; i++){
    tab[0] = 0;
    tab[1] = 1;
    tab[i] = tab[i-1] + tab[i-2];
}
    return (tab[sequence]);
    
}

int fibonacci_recursive(int sequence) {

    if (sequence < 0) {
        std::cout << "Liczba nie moze byc ujemna!";
    } else if (sequence <= 1) {
        return(sequence);
    }
    return (fibonacci_recursive(sequence - 1) + (fibonacci_recursive(sequence - 2)));
}
