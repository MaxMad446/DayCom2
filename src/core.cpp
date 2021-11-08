// Auto-generated module | 2026-05-11T20:38:06.957674
#include <iostream>
#include <vector>

int compute_929() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
