// Auto-generated module | 2026-05-11T21:18:31.329356
#include <iostream>
#include <vector>

int compute_766() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_766() << std::endl;
    return 0;
}
