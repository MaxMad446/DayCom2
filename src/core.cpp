// Auto-generated module | 2026-05-12T04:16:38.005587
#include <iostream>
#include <vector>

int compute_543() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
