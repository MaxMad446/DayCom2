// Auto-generated module | 2026-05-12T21:05:01.421190
#include <iostream>
#include <vector>

int compute_291() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
