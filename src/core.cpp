// Auto-generated module | 2026-05-14T18:27:53.672980
#include <iostream>
#include <vector>

int compute_344() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
