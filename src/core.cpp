// Auto-generated module | 2026-05-13T20:59:24.975783
#include <iostream>
#include <vector>

int compute_824() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
