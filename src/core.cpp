// Auto-generated module | 2026-05-12T21:05:04.558975
#include <iostream>
#include <vector>

int compute_594() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
