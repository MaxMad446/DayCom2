// Auto-generated module | 2026-05-12T21:15:20.230288
#include <iostream>
#include <vector>

int compute_244() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_244() << std::endl;
    return 0;
}
