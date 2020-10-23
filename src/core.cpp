// Auto-generated module | 2026-05-11T19:48:22.926368
#include <iostream>
#include <vector>

int compute_311() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
