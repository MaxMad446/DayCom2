// Auto-generated module | 2026-05-13T20:28:03.613224
#include <iostream>
#include <vector>

int compute_626() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
