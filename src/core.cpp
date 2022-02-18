// Auto-generated module | 2026-05-13T22:04:37.144246
#include <iostream>
#include <vector>

int compute_323() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_323() << std::endl;
    return 0;
}
