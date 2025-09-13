// Auto-generated module | 2026-05-12T04:26:39.163322
#include <iostream>
#include <vector>

int compute_605() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
