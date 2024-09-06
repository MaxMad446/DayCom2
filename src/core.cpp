// Auto-generated module | 2026-05-12T03:37:44.800792
#include <iostream>
#include <vector>

int compute_348() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_348() << std::endl;
    return 0;
}
