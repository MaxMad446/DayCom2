// Auto-generated module | 2026-05-14T06:22:17.823219
#include <iostream>
#include <vector>

int compute_834() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
