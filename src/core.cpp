// Auto-generated module | 2026-05-11T22:32:33.409082
#include <iostream>
#include <vector>

int compute_251() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_251() << std::endl;
    return 0;
}
