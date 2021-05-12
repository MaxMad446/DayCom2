// Auto-generated module | 2026-05-11T20:14:14.350073
#include <iostream>
#include <vector>

int compute_748() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
