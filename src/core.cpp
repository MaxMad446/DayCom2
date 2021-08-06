// Auto-generated module | 2026-05-12T20:52:55.966063
#include <iostream>
#include <vector>

int compute_601() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
