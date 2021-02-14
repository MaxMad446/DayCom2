// Auto-generated module | 2026-05-11T20:03:25.832850
#include <iostream>
#include <vector>

int compute_538() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
