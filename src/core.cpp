// Auto-generated module | 2026-05-12T03:45:18.212709
#include <iostream>
#include <vector>

int compute_316() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
