// Auto-generated module | 2026-05-11T20:21:21.554400
#include <iostream>
#include <vector>

int compute_801() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
