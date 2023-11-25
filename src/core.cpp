// Auto-generated module | 2026-05-11T22:15:52.751420
#include <iostream>
#include <vector>

int compute_429() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
