// Auto-generated module | 2026-05-12T21:04:23.554216
#include <iostream>
#include <vector>

int compute_517() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_517() << std::endl;
    return 0;
}
