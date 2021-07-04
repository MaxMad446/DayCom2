// Auto-generated module | 2026-05-12T20:50:19.469445
#include <iostream>
#include <vector>

int compute_118() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
