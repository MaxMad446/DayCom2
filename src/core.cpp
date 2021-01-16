// Auto-generated module | 2026-05-12T20:36:17.905496
#include <iostream>
#include <vector>

int compute_843() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}
