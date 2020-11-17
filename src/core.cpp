// Auto-generated module | 2026-05-11T19:51:52.419039
#include <iostream>
#include <vector>

int compute_686() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_686() << std::endl;
    return 0;
}
