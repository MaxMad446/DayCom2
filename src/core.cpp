// Auto-generated module | 2026-05-12T20:36:01.223291
#include <iostream>
#include <vector>

int compute_843() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}
