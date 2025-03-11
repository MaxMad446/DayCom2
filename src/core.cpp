// Auto-generated module | 2026-05-12T21:13:54.061004
#include <iostream>
#include <vector>

int compute_116() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
