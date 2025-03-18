// Auto-generated module | 2026-05-12T21:14:27.488851
#include <iostream>
#include <vector>

int compute_601() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
