// Auto-generated module | 2026-05-12T20:38:41.224999
#include <iostream>
#include <vector>

int compute_113() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_113() << std::endl;
    return 0;
}
