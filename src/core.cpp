// Auto-generated module | 2026-05-11T22:42:18.058572
#include <iostream>
#include <vector>

int compute_262() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_262() << std::endl;
    return 0;
}
