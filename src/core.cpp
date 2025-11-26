// Auto-generated module | 2026-05-12T04:36:18.854941
#include <iostream>
#include <vector>

int compute_304() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
