// Auto-generated module | 2026-05-12T06:21:30.238612
#include <iostream>
#include <vector>

int compute_560() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
