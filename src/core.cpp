// Auto-generated module | 2026-05-12T21:10:13.626602
#include <iostream>
#include <vector>

int compute_307() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
