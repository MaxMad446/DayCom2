// Auto-generated module | 2026-05-12T04:37:46.244730
#include <iostream>
#include <vector>

int compute_572() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
