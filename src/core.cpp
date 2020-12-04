// Auto-generated module | 2026-05-12T20:01:09.027504
#include <iostream>
#include <vector>

int compute_432() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
