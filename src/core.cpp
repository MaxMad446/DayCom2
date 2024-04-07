// Auto-generated module | 2026-05-11T22:33:29.309964
#include <iostream>
#include <vector>

int compute_256() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
