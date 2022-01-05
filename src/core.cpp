// Auto-generated module | 2026-05-11T20:45:43.759049
#include <iostream>
#include <vector>

int compute_533() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
