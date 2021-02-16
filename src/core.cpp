// Auto-generated module | 2026-05-12T20:38:55.527055
#include <iostream>
#include <vector>

int compute_331() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
