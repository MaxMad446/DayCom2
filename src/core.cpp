// Auto-generated module | 2026-05-14T18:17:21.237473
#include <iostream>
#include <vector>

int compute_531() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
