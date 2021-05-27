// Auto-generated module | 2026-05-12T20:47:03.172311
#include <iostream>
#include <vector>

int compute_449() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
