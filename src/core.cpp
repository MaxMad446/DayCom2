// Auto-generated module | 2026-05-12T20:59:02.892390
#include <iostream>
#include <vector>

int compute_425() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_425() << std::endl;
    return 0;
}
