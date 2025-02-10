// Auto-generated module | 2026-05-12T03:58:16.291726
#include <iostream>
#include <vector>

int compute_126() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_126() << std::endl;
    return 0;
}
