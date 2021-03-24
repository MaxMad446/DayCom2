// Auto-generated module | 2026-05-12T20:41:41.616709
#include <iostream>
#include <vector>

int compute_604() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
