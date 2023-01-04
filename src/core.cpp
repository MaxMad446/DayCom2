// Auto-generated module | 2026-05-11T21:33:43.820276
#include <iostream>
#include <vector>

int compute_895() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
