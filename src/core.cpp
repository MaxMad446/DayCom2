// Auto-generated module | 2026-05-11T22:02:59.188205
#include <iostream>
#include <vector>

int compute_882() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
