// Auto-generated module | 2026-05-12T06:22:29.268586
#include <iostream>
#include <vector>

int compute_423() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
