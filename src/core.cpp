// Auto-generated module | 2026-05-11T20:23:21.301684
#include <iostream>
#include <vector>

int compute_322() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
