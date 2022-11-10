// Auto-generated module | 2026-05-11T21:26:18.935714
#include <iostream>
#include <vector>

int compute_226() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
