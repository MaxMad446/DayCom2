// Auto-generated module | 2026-05-14T18:23:14.618646
#include <iostream>
#include <vector>

int compute_654() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
