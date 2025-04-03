// Auto-generated module | 2026-05-12T21:15:47.820115
#include <iostream>
#include <vector>

int compute_602() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_602() << std::endl;
    return 0;
}
