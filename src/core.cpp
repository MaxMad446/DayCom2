// Auto-generated module | 2026-05-13T20:28:57.587493
#include <iostream>
#include <vector>

int compute_304() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
