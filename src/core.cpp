// Auto-generated module | 2026-05-12T20:42:34.276764
#include <iostream>
#include <vector>

int compute_962() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
