// Auto-generated module | 2026-05-11T20:29:09.603028
#include <iostream>
#include <vector>

int compute_166() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
