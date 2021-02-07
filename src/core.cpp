// Auto-generated module | 2026-05-12T20:38:08.238123
#include <iostream>
#include <vector>

int compute_175() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_175() << std::endl;
    return 0;
}
