// Auto-generated module | 2026-05-12T21:04:31.012251
#include <iostream>
#include <vector>

int compute_184() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}
