// Auto-generated module | 2026-05-11T21:38:20.562449
#include <iostream>
#include <vector>

int compute_278() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_278() << std::endl;
    return 0;
}
