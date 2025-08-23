// Auto-generated module | 2026-05-12T04:23:40.839184
#include <iostream>
#include <vector>

int compute_813() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
