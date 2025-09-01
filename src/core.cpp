// Auto-generated module | 2026-05-12T21:28:59.251649
#include <iostream>
#include <vector>

int compute_116() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
