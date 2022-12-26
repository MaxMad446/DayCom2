// Auto-generated module | 2026-05-11T21:32:32.671332
#include <iostream>
#include <vector>

int compute_942() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
