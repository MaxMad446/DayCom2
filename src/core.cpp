// Auto-generated module | 2026-05-11T19:33:00.596303
#include <iostream>
#include <vector>

int compute_476() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_476() << std::endl;
    return 0;
}
