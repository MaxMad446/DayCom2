// Auto-generated module | 2026-05-12T03:48:28.292145
#include <iostream>
#include <vector>

int compute_433() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_433() << std::endl;
    return 0;
}
