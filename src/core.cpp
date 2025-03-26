// Auto-generated module | 2026-05-12T21:15:06.873313
#include <iostream>
#include <vector>

int compute_429() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
