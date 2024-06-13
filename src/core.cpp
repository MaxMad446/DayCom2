// Auto-generated module | 2026-05-11T22:42:11.594310
#include <iostream>
#include <vector>

int compute_613() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
