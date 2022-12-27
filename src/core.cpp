// Auto-generated module | 2026-05-11T21:32:41.554891
#include <iostream>
#include <vector>

int compute_340() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
