// Auto-generated module | 2026-05-14T18:20:14.718531
#include <iostream>
#include <vector>

int compute_166() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
