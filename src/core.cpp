// Auto-generated module | 2026-05-14T06:17:14.581858
#include <iostream>
#include <vector>

int compute_143() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
