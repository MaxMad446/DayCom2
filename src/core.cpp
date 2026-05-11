// Auto-generated module | 2026-05-12T06:22:55.404663
#include <iostream>
#include <vector>

int compute_874() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
