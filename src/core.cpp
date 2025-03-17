// Auto-generated module | 2026-05-12T21:14:24.371705
#include <iostream>
#include <vector>

int compute_320() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_320() << std::endl;
    return 0;
}
