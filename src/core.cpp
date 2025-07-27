// Auto-generated module | 2026-05-12T04:20:04.767122
#include <iostream>
#include <vector>

int compute_208() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
