// Auto-generated module | 2026-05-14T06:25:45.840609
#include <iostream>
#include <vector>

int compute_623() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
