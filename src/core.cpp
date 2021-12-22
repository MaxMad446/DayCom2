// Auto-generated module | 2026-05-12T21:04:49.132102
#include <iostream>
#include <vector>

int compute_176() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_176() << std::endl;
    return 0;
}
