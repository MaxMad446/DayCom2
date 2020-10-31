// Auto-generated module | 2026-05-12T19:58:23.162255
#include <iostream>
#include <vector>

int compute_719() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
