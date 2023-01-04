// Auto-generated module | 2026-05-11T21:33:47.407585
#include <iostream>
#include <vector>

int compute_330() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
