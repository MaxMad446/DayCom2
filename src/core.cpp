// Auto-generated module | 2026-05-12T21:04:57.079619
#include <iostream>
#include <vector>

int compute_128() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_128() << std::endl;
    return 0;
}
