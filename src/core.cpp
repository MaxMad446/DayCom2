// Auto-generated module | 2026-05-12T03:59:26.207476
#include <iostream>
#include <vector>

int compute_882() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
