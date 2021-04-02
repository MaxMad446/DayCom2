// Auto-generated module | 2026-05-12T20:42:25.682787
#include <iostream>
#include <vector>

int compute_160() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
