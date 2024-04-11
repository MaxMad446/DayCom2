// Auto-generated module | 2026-05-11T22:34:03.076838
#include <iostream>
#include <vector>

int compute_891() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
