// Auto-generated module | 2026-05-13T20:53:41.476162
#include <iostream>
#include <vector>

int compute_959() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_959() << std::endl;
    return 0;
}
