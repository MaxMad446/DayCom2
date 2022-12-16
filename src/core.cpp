// Auto-generated module | 2026-05-14T06:27:26.934946
#include <iostream>
#include <vector>

int compute_572() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
