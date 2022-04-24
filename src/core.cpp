// Auto-generated module | 2026-05-11T20:59:55.434829
#include <iostream>
#include <vector>

int compute_757() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_757() << std::endl;
    return 0;
}
