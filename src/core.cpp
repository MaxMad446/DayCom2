// Auto-generated module | 2026-05-11T22:33:04.741586
#include <iostream>
#include <vector>

int compute_178() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
