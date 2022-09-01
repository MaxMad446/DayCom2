// Auto-generated module | 2026-05-14T06:18:39.204720
#include <iostream>
#include <vector>

int compute_614() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
