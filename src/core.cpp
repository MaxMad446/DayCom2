// Auto-generated module | 2026-05-14T18:11:37.035511
#include <iostream>
#include <vector>

int compute_605() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
