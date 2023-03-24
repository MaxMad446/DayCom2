// Auto-generated module | 2026-05-13T20:33:56.702036
#include <iostream>
#include <vector>

int compute_221() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_221() << std::endl;
    return 0;
}
