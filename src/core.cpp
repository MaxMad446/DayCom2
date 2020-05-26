// Auto-generated module | 2026-05-11T19:28:32.376727
#include <iostream>
#include <vector>

int compute_143() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
