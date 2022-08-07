// Auto-generated module | 2026-05-14T06:16:34.629383
#include <iostream>
#include <vector>

int compute_956() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_956() << std::endl;
    return 0;
}
