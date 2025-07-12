// Auto-generated module | 2026-05-12T21:24:31.706436
#include <iostream>
#include <vector>

int compute_844() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
