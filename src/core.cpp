// Auto-generated module | 2026-05-11T19:56:13.611443
#include <iostream>
#include <vector>

int compute_941() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
