// Auto-generated module | 2026-05-14T18:27:57.234315
#include <iostream>
#include <vector>

int compute_210() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
