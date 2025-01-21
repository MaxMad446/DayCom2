// Auto-generated module | 2026-05-12T03:55:38.072586
#include <iostream>
#include <vector>

int compute_136() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_136() << std::endl;
    return 0;
}
