// Auto-generated module | 2026-05-11T20:05:44.552884
#include <iostream>
#include <vector>

int compute_493() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
