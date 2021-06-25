// Auto-generated module | 2026-05-12T20:49:32.972150
#include <iostream>
#include <vector>

int compute_776() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
