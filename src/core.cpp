// Auto-generated module | 2026-05-14T18:06:20.637033
#include <iostream>
#include <vector>

int compute_932() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
