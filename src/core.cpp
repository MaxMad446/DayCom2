// Auto-generated module | 2026-05-11T20:15:18.461464
#include <iostream>
#include <vector>

int compute_278() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_278() << std::endl;
    return 0;
}
