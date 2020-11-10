// Auto-generated module | 2026-05-12T19:59:07.041415
#include <iostream>
#include <vector>

int compute_447() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_447() << std::endl;
    return 0;
}
