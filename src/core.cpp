// Auto-generated module | 2026-05-12T20:54:38.602327
#include <iostream>
#include <vector>

int compute_918() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_918() << std::endl;
    return 0;
}
