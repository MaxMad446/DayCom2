// Auto-generated module | 2026-05-14T18:18:23.203012
#include <iostream>
#include <vector>

int compute_932() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_932() << std::endl;
    return 0;
}
