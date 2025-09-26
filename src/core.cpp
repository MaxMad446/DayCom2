// Auto-generated module | 2026-05-12T04:28:21.063624
#include <iostream>
#include <vector>

int compute_301() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
