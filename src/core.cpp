// Auto-generated module | 2026-05-12T20:39:57.945904
#include <iostream>
#include <vector>

int compute_724() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
