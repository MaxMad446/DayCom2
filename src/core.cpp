// Auto-generated module | 2026-05-12T20:53:41.407399
#include <iostream>
#include <vector>

int compute_587() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
