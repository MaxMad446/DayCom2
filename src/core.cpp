// Auto-generated module | 2026-05-12T19:58:36.941336
#include <iostream>
#include <vector>

int compute_886() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_886() << std::endl;
    return 0;
}
