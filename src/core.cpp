// Auto-generated module | 2026-05-12T20:01:03.377759
#include <iostream>
#include <vector>

int compute_954() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_954() << std::endl;
    return 0;
}
