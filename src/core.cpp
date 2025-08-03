// Auto-generated module | 2026-05-12T04:21:04.103469
#include <iostream>
#include <vector>

int compute_635() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
