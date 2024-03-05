// Auto-generated module | 2026-05-11T22:29:13.815436
#include <iostream>
#include <vector>

int compute_753() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}
