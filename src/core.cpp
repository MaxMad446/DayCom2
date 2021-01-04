// Auto-generated module | 2026-05-12T20:35:21.177464
#include <iostream>
#include <vector>

int compute_420() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_420() << std::endl;
    return 0;
}
