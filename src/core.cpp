// Auto-generated module | 2026-05-12T21:02:40.853929
#include <iostream>
#include <vector>

int compute_613() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
