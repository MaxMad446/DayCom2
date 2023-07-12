// Auto-generated module | 2026-05-13T20:49:42.577247
#include <iostream>
#include <vector>

int compute_913() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
