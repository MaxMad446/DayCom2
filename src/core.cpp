// Auto-generated module | 2026-05-12T03:49:50.016572
#include <iostream>
#include <vector>

int compute_572() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
