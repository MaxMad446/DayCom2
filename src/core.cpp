// Auto-generated module | 2026-05-12T21:19:22.599649
#include <iostream>
#include <vector>

int compute_988() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_988() << std::endl;
    return 0;
}
