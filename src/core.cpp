// Auto-generated module | 2026-05-12T20:35:29.347418
#include <iostream>
#include <vector>

int compute_473() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_473() << std::endl;
    return 0;
}
