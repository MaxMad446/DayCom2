// Auto-generated module | 2026-05-12T20:49:04.036897
#include <iostream>
#include <vector>

int compute_925() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
