// Auto-generated module | 2026-05-12T20:40:49.073821
#include <iostream>
#include <vector>

int compute_104() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_104() << std::endl;
    return 0;
}
