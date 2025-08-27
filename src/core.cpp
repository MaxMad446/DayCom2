// Auto-generated module | 2026-05-12T04:24:11.911441
#include <iostream>
#include <vector>

int compute_885() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
