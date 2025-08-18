// Auto-generated module | 2026-05-12T21:27:42.532317
#include <iostream>
#include <vector>

int compute_549() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
