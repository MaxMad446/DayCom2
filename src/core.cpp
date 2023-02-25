// Auto-generated module | 2026-05-13T20:31:35.280607
#include <iostream>
#include <vector>

int compute_368() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
