// Auto-generated module | 2026-05-11T20:47:24.562828
#include <iostream>
#include <vector>

int compute_304() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
