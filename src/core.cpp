// Auto-generated module | 2026-05-13T20:35:02.509645
#include <iostream>
#include <vector>

int compute_497() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_497() << std::endl;
    return 0;
}
