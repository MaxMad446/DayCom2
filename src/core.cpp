// Auto-generated module | 2026-05-11T21:54:22.945584
#include <iostream>
#include <vector>

int compute_192() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
