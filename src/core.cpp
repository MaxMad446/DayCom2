// Auto-generated module | 2026-05-12T04:31:59.247591
#include <iostream>
#include <vector>

int compute_139() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
