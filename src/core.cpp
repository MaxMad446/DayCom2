// Auto-generated module | 2026-05-12T20:00:02.614493
#include <iostream>
#include <vector>

int compute_693() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
