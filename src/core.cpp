// Auto-generated module | 2026-05-12T04:22:01.179372
#include <iostream>
#include <vector>

int compute_233() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
