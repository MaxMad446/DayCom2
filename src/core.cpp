// Auto-generated module | 2026-05-11T20:54:35.675689
#include <iostream>
#include <vector>

int compute_438() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_438() << std::endl;
    return 0;
}
