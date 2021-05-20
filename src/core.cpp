// Auto-generated module | 2026-05-12T20:46:27.196248
#include <iostream>
#include <vector>

int compute_521() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
