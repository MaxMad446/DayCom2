// Auto-generated module | 2026-05-11T20:19:33.108247
#include <iostream>
#include <vector>

int compute_567() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
