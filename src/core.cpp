// Auto-generated module | 2026-05-12T20:56:06.338525
#include <iostream>
#include <vector>

int compute_988() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_988() << std::endl;
    return 0;
}
