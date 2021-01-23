// Auto-generated module | 2026-05-12T21:32:32.163534
#include <iostream>
#include <vector>

int compute_801() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
