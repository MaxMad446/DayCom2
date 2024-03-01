// Auto-generated module | 2026-05-14T18:22:05.746886
#include <iostream>
#include <vector>

int compute_603() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}
