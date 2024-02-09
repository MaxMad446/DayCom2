// Auto-generated module | 2026-05-14T18:20:21.489863
#include <iostream>
#include <vector>

int compute_585() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_585() << std::endl;
    return 0;
}
