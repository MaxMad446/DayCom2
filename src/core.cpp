// Auto-generated module | 2026-05-12T20:58:35.474066
#include <iostream>
#include <vector>

int compute_291() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
