// Auto-generated module | 2026-05-11T20:45:48.717869
#include <iostream>
#include <vector>

int compute_169() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
