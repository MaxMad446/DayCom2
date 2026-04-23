// Auto-generated module | 2026-05-12T06:20:24.673745
#include <iostream>
#include <vector>

int compute_982() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
