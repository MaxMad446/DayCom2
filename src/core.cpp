// Auto-generated module | 2026-05-12T04:20:09.000610
#include <iostream>
#include <vector>

int compute_956() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_956() << std::endl;
    return 0;
}
