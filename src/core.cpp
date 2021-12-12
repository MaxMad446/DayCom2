// Auto-generated module | 2026-05-11T20:42:40.208596
#include <iostream>
#include <vector>

int compute_891() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
