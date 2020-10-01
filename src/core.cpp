// Auto-generated module | 2026-05-11T19:45:27.875786
#include <iostream>
#include <vector>

int compute_584() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_584() << std::endl;
    return 0;
}
