// Auto-generated module | 2026-05-12T20:00:55.841676
#include <iostream>
#include <vector>

int compute_916() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_916() << std::endl;
    return 0;
}
