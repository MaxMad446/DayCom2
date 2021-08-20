// Auto-generated module | 2026-05-12T20:54:11.479364
#include <iostream>
#include <vector>

int compute_225() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
