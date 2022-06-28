// Auto-generated module | 2026-05-14T06:13:31.425798
#include <iostream>
#include <vector>

int compute_213() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
