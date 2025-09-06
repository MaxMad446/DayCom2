// Auto-generated module | 2026-05-12T04:25:41.476713
#include <iostream>
#include <vector>

int compute_179() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
