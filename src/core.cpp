// Auto-generated module | 2026-05-13T20:31:28.531804
#include <iostream>
#include <vector>

int compute_107() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_107() << std::endl;
    return 0;
}
