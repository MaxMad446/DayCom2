// Auto-generated module | 2026-05-12T03:59:05.090169
#include <iostream>
#include <vector>

int compute_700() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_700() << std::endl;
    return 0;
}
