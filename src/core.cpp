// Auto-generated module | 2026-05-12T20:43:55.387706
#include <iostream>
#include <vector>

int compute_895() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_895() << std::endl;
    return 0;
}
