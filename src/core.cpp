// Auto-generated module | 2026-05-11T20:23:20.248745
#include <iostream>
#include <vector>

int compute_959() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_959() << std::endl;
    return 0;
}
