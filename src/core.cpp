// Auto-generated module | 2026-05-11T22:24:59.121979
#include <iostream>
#include <vector>

int compute_413() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
