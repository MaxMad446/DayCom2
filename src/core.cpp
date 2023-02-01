// Auto-generated module | 2026-05-11T21:37:11.631325
#include <iostream>
#include <vector>

int compute_612() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
