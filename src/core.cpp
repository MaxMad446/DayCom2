// Auto-generated module | 2026-05-11T21:19:05.635546
#include <iostream>
#include <vector>

int compute_686() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_686() << std::endl;
    return 0;
}
