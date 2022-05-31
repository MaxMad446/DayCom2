// Auto-generated module | 2026-05-11T21:04:56.778172
#include <iostream>
#include <vector>

int compute_854() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
