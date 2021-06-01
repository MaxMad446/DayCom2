// Auto-generated module | 2026-05-12T20:47:31.781292
#include <iostream>
#include <vector>

int compute_656() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
