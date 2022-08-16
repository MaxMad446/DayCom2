// Auto-generated module | 2026-05-11T21:15:17.634630
#include <iostream>
#include <vector>

int compute_771() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_771() << std::endl;
    return 0;
}
