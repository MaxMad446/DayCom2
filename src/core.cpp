// Auto-generated module | 2026-05-11T21:24:50.200573
#include <iostream>
#include <vector>

int compute_620() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
