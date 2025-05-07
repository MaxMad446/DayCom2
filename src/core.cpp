// Auto-generated module | 2026-05-12T21:18:38.401284
#include <iostream>
#include <vector>

int compute_988() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_988() << std::endl;
    return 0;
}
