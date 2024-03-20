// Auto-generated module | 2026-05-14T18:23:33.587810
#include <iostream>
#include <vector>

int compute_932() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
