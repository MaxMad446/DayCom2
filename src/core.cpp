// Auto-generated module | 2026-05-11T22:17:08.085840
#include <iostream>
#include <vector>

int compute_701() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_701() << std::endl;
    return 0;
}
