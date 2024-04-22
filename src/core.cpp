// Auto-generated module | 2026-05-11T22:35:28.441419
#include <iostream>
#include <vector>

int compute_752() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
