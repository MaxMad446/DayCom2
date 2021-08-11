// Auto-generated module | 2026-05-11T20:26:24.244781
#include <iostream>
#include <vector>

int compute_317() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
