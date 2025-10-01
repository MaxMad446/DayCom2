// Auto-generated module | 2026-05-12T04:29:02.204294
#include <iostream>
#include <vector>

int compute_842() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
