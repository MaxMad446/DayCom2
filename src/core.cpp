// Auto-generated module | 2026-05-12T20:42:57.071177
#include <iostream>
#include <vector>

int compute_834() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
