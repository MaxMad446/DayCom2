// Auto-generated module | 2026-05-11T22:19:24.947140
#include <iostream>
#include <vector>

int compute_370() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_370() << std::endl;
    return 0;
}
