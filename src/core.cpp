// Auto-generated module | 2026-05-11T20:13:33.890750
#include <iostream>
#include <vector>

int compute_573() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_573() << std::endl;
    return 0;
}
