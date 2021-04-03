// Auto-generated module | 2026-05-12T20:42:30.620347
#include <iostream>
#include <vector>

int compute_237() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}
