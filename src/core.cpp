// Auto-generated module | 2026-05-12T20:52:13.157485
#include <iostream>
#include <vector>

int compute_710() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
