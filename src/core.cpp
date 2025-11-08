// Auto-generated module | 2026-05-12T04:34:03.636334
#include <iostream>
#include <vector>

int compute_286() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_286() << std::endl;
    return 0;
}
