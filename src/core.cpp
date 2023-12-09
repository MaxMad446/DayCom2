// Auto-generated module | 2026-05-13T21:01:59.612669
#include <iostream>
#include <vector>

int compute_272() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_272() << std::endl;
    return 0;
}
