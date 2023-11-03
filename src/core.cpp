// Auto-generated module | 2026-05-13T20:59:04.442233
#include <iostream>
#include <vector>

int compute_936() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
