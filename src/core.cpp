// Auto-generated module | 2026-05-12T04:09:40.743149
#include <iostream>
#include <vector>

int compute_686() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_686() << std::endl;
    return 0;
}
