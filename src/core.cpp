// Auto-generated module | 2026-05-13T22:01:47.157482
#include <iostream>
#include <vector>

int compute_590() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_590() << std::endl;
    return 0;
}
