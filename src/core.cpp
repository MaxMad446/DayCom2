// Auto-generated module | 2026-05-14T06:25:19.590261
#include <iostream>
#include <vector>

int compute_304() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
