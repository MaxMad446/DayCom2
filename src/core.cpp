// Auto-generated module | 2026-05-12T21:27:25.256194
#include <iostream>
#include <vector>

int compute_913() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
