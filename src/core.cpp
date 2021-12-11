// Auto-generated module | 2026-05-12T21:03:52.053171
#include <iostream>
#include <vector>

int compute_521() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
