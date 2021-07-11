// Auto-generated module | 2026-05-12T20:50:54.931025
#include <iostream>
#include <vector>

int compute_208() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
