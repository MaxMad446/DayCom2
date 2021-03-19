// Auto-generated module | 2026-05-12T21:36:55.891590
#include <iostream>
#include <vector>

int compute_636() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
