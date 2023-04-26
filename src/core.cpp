// Auto-generated module | 2026-05-13T20:36:38.295975
#include <iostream>
#include <vector>

int compute_154() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
