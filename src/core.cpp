// Auto-generated module | 2026-05-12T04:42:17.149527
#include <iostream>
#include <vector>

int compute_304() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
