// Auto-generated module | 2026-05-12T21:11:13.107983
#include <iostream>
#include <vector>

int compute_246() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
