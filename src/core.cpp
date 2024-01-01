// Auto-generated module | 2026-05-11T22:20:41.135846
#include <iostream>
#include <vector>

int compute_650() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
