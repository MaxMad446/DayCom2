// Auto-generated module | 2026-05-12T21:35:07.584219
#include <iostream>
#include <vector>

int compute_304() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
