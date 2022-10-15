// Auto-generated module | 2026-05-11T21:22:56.864297
#include <iostream>
#include <vector>

int compute_913() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_913() << std::endl;
    return 0;
}
