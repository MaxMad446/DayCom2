// Auto-generated module | 2026-05-11T21:39:16.374686
#include <iostream>
#include <vector>

int compute_710() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
