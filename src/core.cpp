// Auto-generated module | 2026-05-11T20:47:42.980567
#include <iostream>
#include <vector>

int compute_454() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
