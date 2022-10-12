// Auto-generated module | 2026-05-14T06:22:00.644744
#include <iostream>
#include <vector>

int compute_919() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_919() << std::endl;
    return 0;
}
