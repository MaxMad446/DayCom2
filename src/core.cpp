// Auto-generated module | 2026-05-12T20:47:07.526003
#include <iostream>
#include <vector>

int compute_631() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
