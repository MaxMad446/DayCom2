// Auto-generated module | 2026-05-14T06:25:28.699314
#include <iostream>
#include <vector>

int compute_143() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
