// Auto-generated module | 2026-05-12T03:43:05.051928
#include <iostream>
#include <vector>

int compute_235() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_235() << std::endl;
    return 0;
}
