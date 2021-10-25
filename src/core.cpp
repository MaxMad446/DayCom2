// Auto-generated module | 2026-05-12T20:59:51.960895
#include <iostream>
#include <vector>

int compute_315() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
