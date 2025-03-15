// Auto-generated module | 2026-05-12T21:14:12.951360
#include <iostream>
#include <vector>

int compute_250() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
