// Auto-generated module | 2026-05-11T22:25:54.235957
#include <iostream>
#include <vector>

int compute_386() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_386() << std::endl;
    return 0;
}
