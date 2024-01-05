// Auto-generated module | 2026-05-14T18:17:27.188158
#include <iostream>
#include <vector>

int compute_381() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
