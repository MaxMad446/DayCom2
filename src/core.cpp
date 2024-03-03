// Auto-generated module | 2026-05-14T18:22:18.411334
#include <iostream>
#include <vector>

int compute_602() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_602() << std::endl;
    return 0;
}
