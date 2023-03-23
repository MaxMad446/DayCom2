// Auto-generated module | 2026-05-11T21:43:29.199826
#include <iostream>
#include <vector>

int compute_147() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
