// Auto-generated module | 2026-05-11T22:51:58.571942
#include <iostream>
#include <vector>

int compute_892() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
