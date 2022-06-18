#include <iostream>

bool is_prime(int num) {
    if (num < 1) return false;
    if (num == 1 || num == 2) return true;

    for (int t = 2; t * t < num; t++)
        if (num % t == 0) return false;

    return true;
}

int main(void) {
    std::cout << "Prime checker algorithm!\n";
    std::cout << "isPrime(717317) : " << is_prime(717317) << std::endl;
}
