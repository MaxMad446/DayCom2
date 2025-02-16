// Auto-generated module | 2026-05-12T03:59:03.349211
#include <iostream>
#include <vector>

int compute_886() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_886() << std::endl;
    return 0;
}
