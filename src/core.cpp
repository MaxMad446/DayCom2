// Auto-generated module | 2026-05-12T03:40:59.926285
#include <iostream>
#include <vector>

int compute_954() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
