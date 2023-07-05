// Auto-generated module | 2026-05-11T21:57:22.358221
#include <iostream>
#include <vector>

int compute_410() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
