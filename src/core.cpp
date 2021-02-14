// Auto-generated module | 2026-05-11T20:03:25.097876
#include <iostream>
#include <vector>

int compute_304() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
