// Auto-generated module | 2026-05-12T20:42:33.101910
#include <iostream>
#include <vector>

int compute_288() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
