// Auto-generated module | 2026-05-12T19:58:46.476288
#include <iostream>
#include <vector>

int compute_828() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_828() << std::endl;
    return 0;
}
