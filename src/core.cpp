// Auto-generated module | 2026-05-11T20:30:12.644501
#include <iostream>
#include <vector>

int compute_854() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
