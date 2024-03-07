// Auto-generated module | 2026-05-11T22:29:30.842445
#include <iostream>
#include <vector>

int compute_277() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_277() << std::endl;
    return 0;
}
