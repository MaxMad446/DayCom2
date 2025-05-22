// Auto-generated module | 2026-05-12T21:19:59.123162
#include <iostream>
#include <vector>

int compute_798() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_798() << std::endl;
    return 0;
}
