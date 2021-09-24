// Auto-generated module | 2026-05-12T20:57:27.059061
#include <iostream>
#include <vector>

int compute_311() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
