// Auto-generated module | 2026-05-14T06:23:24.385297
#include <iostream>
#include <vector>

int compute_386() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_386() << std::endl;
    return 0;
}
