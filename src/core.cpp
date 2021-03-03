// Auto-generated module | 2026-05-12T21:35:41.059712
#include <iostream>
#include <vector>

int compute_409() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
