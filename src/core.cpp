// Auto-generated module | 2026-05-11T21:45:58.065837
#include <iostream>
#include <vector>

int compute_174() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
