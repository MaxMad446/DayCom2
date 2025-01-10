// Auto-generated module | 2026-05-12T03:54:16.108890
#include <iostream>
#include <vector>

int compute_265() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_265() << std::endl;
    return 0;
}
