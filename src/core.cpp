// Auto-generated module | 2026-05-12T20:46:41.633430
#include <iostream>
#include <vector>

int compute_185() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
