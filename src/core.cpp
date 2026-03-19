// Auto-generated module | 2026-05-12T04:51:51.301405
#include <iostream>
#include <vector>

int compute_967() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
