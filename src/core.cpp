// Auto-generated module | 2026-05-12T03:47:42.835252
#include <iostream>
#include <vector>

int compute_262() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_262() << std::endl;
    return 0;
}
