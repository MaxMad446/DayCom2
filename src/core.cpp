// Auto-generated module | 2026-05-11T22:33:47.938407
#include <iostream>
#include <vector>

int compute_882() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
