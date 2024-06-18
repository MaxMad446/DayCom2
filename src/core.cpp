// Auto-generated module | 2026-05-11T22:42:47.624709
#include <iostream>
#include <vector>

int compute_930() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
