// Auto-generated module | 2026-05-11T20:29:40.852322
#include <iostream>
#include <vector>

int compute_591() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
