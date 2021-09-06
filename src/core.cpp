// Auto-generated module | 2026-05-11T20:29:52.031358
#include <iostream>
#include <vector>

int compute_276() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_276() << std::endl;
    return 0;
}
