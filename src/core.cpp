// Auto-generated module | 2026-05-12T21:03:26.310428
#include <iostream>
#include <vector>

int compute_714() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_714() << std::endl;
    return 0;
}
