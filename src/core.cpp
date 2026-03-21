// Auto-generated module | 2026-05-12T06:16:00.490467
#include <iostream>
#include <vector>

int compute_759() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
