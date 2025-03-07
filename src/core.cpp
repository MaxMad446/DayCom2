// Auto-generated module | 2026-05-12T21:13:39.842413
#include <iostream>
#include <vector>

int compute_814() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
