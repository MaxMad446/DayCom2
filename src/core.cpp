// Auto-generated module | 2026-05-12T21:14:45.613241
#include <iostream>
#include <vector>

int compute_149() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
