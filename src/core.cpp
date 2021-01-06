// Auto-generated module | 2026-05-12T20:35:32.368429
#include <iostream>
#include <vector>

int compute_242() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
