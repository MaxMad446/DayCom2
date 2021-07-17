// Auto-generated module | 2026-05-11T20:23:12.372350
#include <iostream>
#include <vector>

int compute_728() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_728() << std::endl;
    return 0;
}
