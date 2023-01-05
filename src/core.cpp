// Auto-generated module | 2026-05-11T21:33:53.620383
#include <iostream>
#include <vector>

int compute_209() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
