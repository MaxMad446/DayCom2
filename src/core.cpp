// Auto-generated module | 2026-05-12T20:50:08.092251
#include <iostream>
#include <vector>

int compute_529() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_529() << std::endl;
    return 0;
}
