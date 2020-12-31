// Auto-generated module | 2026-05-12T20:03:33.801536
#include <iostream>
#include <vector>

int compute_732() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
