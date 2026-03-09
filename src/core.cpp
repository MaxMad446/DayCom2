// Auto-generated module | 2026-05-12T04:50:29.758231
#include <iostream>
#include <vector>

int compute_895() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
