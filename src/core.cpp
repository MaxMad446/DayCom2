// Auto-generated module | 2026-05-12T20:47:44.189107
#include <iostream>
#include <vector>

int compute_814() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
