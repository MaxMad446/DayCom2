// Auto-generated module | 2026-05-12T21:25:49.352205
#include <iostream>
#include <vector>

int compute_176() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_176() << std::endl;
    return 0;
}
