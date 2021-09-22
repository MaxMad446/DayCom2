// Auto-generated module | 2026-05-12T20:57:16.266556
#include <iostream>
#include <vector>

int compute_220() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
