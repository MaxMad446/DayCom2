// Auto-generated module | 2026-05-11T21:22:39.186939
#include <iostream>
#include <vector>

int compute_269() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
